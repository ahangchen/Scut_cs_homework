#include "global.h"
#include "dm.h" 

#include <time.h>
#include <fcntl.h>
#include <string.h>
#include <malloc.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>    
#include <errno.h>

//日志函数，输出运行状态信息，便于调试
void fslog(const char* tag,const char* format,...){
	if(!logFlag)return;
	char* logPath=strdup(disk_path);
	char* q = logPath;
	q+=strlen(disk_path)-7;
	*q='l';q++;*q='o';q++;*q='g';q++;*q='\0';
	FILE* fp;
	fp=fopen(logPath, "at");
	if(fp==NULL){
		return;
	}
	time_t now;         //实例化time_t结构
	struct tm *timenow;         //实例化tm结构指针
	time(&now);
	//time函数读取现在的时间(国际标准时间非北京时间)，然后传值给now
	timenow  =  localtime(&now);
	//localtime函数把从time取得的时间now换算成你电脑中的时间(就是你设置的地区)
	fprintf(fp,"%d-%d-%d %d:%d:%d\t",
	timenow->tm_year+1900,timenow->tm_mon+1,timenow->tm_mday,timenow->tm_hour,timenow->tm_min,timenow->tm_sec);
	//上句中asctime函数把时间转换成字符，通过printf()函数输出
	fprintf(fp,"%s:\t",tag);
	va_list ap;
    va_start(ap, format);
	vfprintf(fp,format,ap);
	va_end(ap);
	free(logPath);
	fclose(fp);
}
//可变函数释放指针
void freePtrs(void*ptr,...){
	va_list argp;                   /* 定义保存函数参数的结构 */    
    int argno=0;                  /* 纪录参数个数 */    
    char *para;                     /* 存放取出的字符串参数 */    
    va_start(argp, ptr);   
    free(ptr); 
    while (1){    
        para=va_arg(argp, void *);                 /*    取出当前的参数，类型为char *. */    
        if (para==NULL)    
            break;    
        free(para);
        
        argno++;    
    }    
    va_end(argp);                                   /* 将argp置为NULL */    
}
//分割路径，读取父目录信息
int dv_path(char*name,char*ext,const char*path,long*p_dir_blk,int flag){
	char*tmp_path,*p,*q;
	tmp_path=strdup(path);
	u_fs_file_directory* attr=malloc(sizeof(u_fs_file_directory));
	p=tmp_path;
	if (!p)
		return -errno;
	//跳过根目录/
	p++;
	
	q=strchr(p, '/');
	/**
	 *找到，
	 *说明是根目录下一个目录里的一个文件(不允许创建带/的目录)
	 *假如是创建目录，却找到了/,说明是二级以下目录，不允许
	 */
	//fslog("dvpath","%s74\n",tmp_path);
	if(flag==2 && q!=NULL) 
		return -EPERM;	
	else if(q!=NULL){// /目录/子目录 或 /目录/文件
		*q='\0';	//截断tmp_path，tmp_path=目录
		q++;
		p=q;      //p=子目录 或 文件
		fslog("dvpath","%s81\n",tmp_path);
		if(dm_open(tmp_path,attr)==-1){//按路径读取这一目录，获取目录属性，确认目录有效
			fslog("dvpath","%s83\n",tmp_path);
			free(attr);
			return -ENOENT;
		}
	}

	if(q==NULL){ // /文件 或 /目录
		if(dm_open("/",attr)==-1){//读取根目录属性，确认根目录有效
			fslog("dvpath","%s90\n",disk_path);
			free(attr);
			return -ENOENT;
		}
    }
	
	if(flag==1){// /文件 或 /目录/文件
		q=strchr(p, '.');
		if(q!=NULL){ //存在拓展名
			*q='\0'; 
			q++;     
		}	
	}
	fslog("dvpath","%s102\n",disk_path);
	//判断文件名，目录名或拓展名是否太长
	if(flag==1){	
		fslog("flag","%d\n",flag);		
		if(strlen(p)>MAX_FILENAME+1){	
			fslog("create","namelong\n");	
			free(attr);	
			return -ENAMETOOLONG; 
		}
		else if(strlen(p)>MAX_FILENAME){
			if(*(p+MAX_FILENAME)!='~'){
				fslog("create","namelong\n");
				free(attr);	
				return -ENAMETOOLONG; 
			}
		}else if(q!=NULL){
			if(strlen(q)>MAX_EXTENSION+1){
				fslog("create","extlong");
				free(attr);	
				return -ENAMETOOLONG; 
			}
			else if(strlen(q)>MAX_EXTENSION){
				if(*(q+MAX_EXTENSION)!='~'){
					fslog("create","extlong\n");
					free(attr);	
					return -ENAMETOOLONG; 
				}
			}
		}
	}
	else if(flag==2){
		if(strlen(p)>MAX_FILENAME){
			fslog("mkdir","namelong\n");	
			free(attr);
			return -ENAMETOOLONG;
		} 
	}
	*name=*ext='\0';
	if(p!=NULL)strcpy(name,p);	
	if(q!=NULL)strcpy(ext,q);	
	free(tmp_path);
	//printf("%s\n%s\n%s\n",dir,name,ext);
	//打开要创建的文件的上层目录
	*p_dir_blk=attr->nStartBlock;
	free(attr);	
	if(*p_dir_blk==-1){
		return -ENOENT;
	}
	return 0 ;	
}
//遍历目录下的所有文件和目录，如果已存在同名文件或目录，返回
int exist_check(u_fs_file_directory *file_dir,char *p,char *q,int* offset,int* pos,int size,int flag){
	//遍历目录下的所有文件和目录，如果已存在同名文件或目录，返回
	//int i=0;
	while(*offset<size){
		if(flag==0)
			*pos=*offset;		
		else if(flag==1 &&  file_dir->flag==1 && strcmp(p,file_dir->fname)==0 
		         && ((*q =='\0' && strlen(file_dir->fext)==0) || (*q!='\0' && strcmp(q,file_dir->fext)==0)))
				return -EEXIST;
		else if (flag==2 && file_dir->flag==2 && strcmp(p,file_dir->fname)==0) 
			   	return -EEXIST;
		
		file_dir++;
		//i++;
		*offset+=sizeof(u_fs_file_directory);
	}
	//fslog("exch","%d\n",i);
	return 0;
}
void new_emp_blk(u_fs_disk_block *blk_info){
	/* initialize the file or the directory block */
	blk_info->size=0;
	blk_info->nNextBlock=-1;
	strcpy(blk_info->data,"\0");	
}
void init_file_dir(u_fs_file_directory *file_dir,char*name,char*ext,int flag){
	//设置要创建的文件或目录的名字
	strcpy(file_dir->fname,name);
	if(flag ==1 && *ext!='\0')
		strcpy(file_dir->fext,ext);
	file_dir->fsize=0;
	file_dir->flag=flag;
}
//为上层目录增加一个后续块
int enlarge_blk(long p_dir_blk,u_fs_file_directory *file_dir,u_fs_disk_block *blk_info,long *tmp,char*p,char*q,int flag){
	long blk;
	tmp=malloc(sizeof(long));
	//找一个空闲块
	if(dm_search_free_blk(1,tmp)==1)
		blk=*tmp;
	else {
		freePtrs(p,q,blk_info,NULL);
		return -errno;
	}
	//fslog("free","succeed182");
	free(tmp);
	//为上层目录添加一个后续块，扩大容量
	blk_info->nNextBlock=blk;
	//上层目录的blk_info域更新为容量大1的blk_info
	dm_write_blk(p_dir_blk,blk_info);
	
	//设置新文件块信息（磁盘层）
	blk_info->size=sizeof(u_fs_file_directory);
	blk_info->nNextBlock=-1;
	//为新文件设置文件信息（文件层）
	file_dir=(u_fs_file_directory*)blk_info->data;
	init_file_dir(file_dir,p,q,flag);
	
	//为新文件找到起始块
	tmp=malloc(sizeof(long));	
	if(dm_search_free_blk(1,tmp)==1)
		file_dir->nStartBlock=*tmp;
	else {
		return -errno;
	}
	free(tmp);	
	//将新文件块信息写入后续块（新文件所在块）中
	dm_write_blk(blk,blk_info);	

	//将新文件起始块信息写入对应块中	
	new_emp_blk(blk_info);
	dm_write_blk(file_dir->nStartBlock,blk_info);
	return 0;
}
//根据路径建立空文件或空目录
int dm_create(const char* path, int flag){
	int res;
	
	long p_dir_blk;
	char *p=malloc(15*sizeof(char)),*q=malloc(15*sizeof(char));
	//fslog("readblk","%s\n177",disk_path);
	//拆分路径，找到父级目录块
	if((res=dv_path(p,q,path,&p_dir_blk,flag))){
		fslog("dmcreate","%lld\n",res);
		freePtrs(p,q,NULL);
		return res;
	}
	fslog("create","%s183\n",path);
	u_fs_disk_block *blk_info=malloc(sizeof(u_fs_disk_block));
	//从目录块中读取目录信息到blk_info
	if(dm_read_blk(p_dir_blk, blk_info)==-1){
		freePtrs(blk_info,p,q,NULL);
		return -ENOENT;	
	}
	u_fs_file_directory *file_dir=(u_fs_file_directory*)blk_info->data;
	
	int offset=0;
	int pos=blk_info->size;
	//遍历目录下的所有文件和目录，如果已存在同名文件或目录，返回
	if((res=exist_check(file_dir,p,q,&offset,&pos,blk_info->size,flag))){
		freePtrs(blk_info,p,q,NULL);
		return res;
	}
	file_dir+=offset/sizeof(u_fs_file_directory);
	
	long *tmp=malloc(sizeof(long));		      
	if(pos==blk_info->size){ 
	//块扩容
		if(blk_info->size>MAX_DATA_IN_BLOCK){
			//当前块放不下目录内容
			if((res=enlarge_blk(p_dir_blk,file_dir,blk_info,tmp,p,q,flag))){
				freePtrs(p,q,blk_info,NULL);
				return res;
			}
			freePtrs(p,q,blk_info,NULL);
			return 0;	
		}
		else{
			//块容量足够，直接加size
			blk_info->size+=sizeof(u_fs_file_directory); 
			//fslog("free","succeed222\n");
		}	
	}
	else{//flag=0
		offset=0;
		file_dir=(u_fs_file_directory*)blk_info->data;
		
		fslog("flag=0","%d\t%d\t\n",offset,pos);
		//file_dir+=blk_info->size;
		while(offset<pos)
			file_dir++;
	}
	init_file_dir(file_dir,p,q,flag);
	//找到空闲块作为起始块
	tmp=malloc(sizeof(long));
	
	if((res=dm_search_free_blk(1,tmp))==1)
		file_dir->nStartBlock=*tmp;
	else{
		//fslog("create","%d\n",rs);
		freePtrs(blk_info,p,q,NULL);
		return -errno;
	}
	free(tmp);	
	
    //将要创建的文件或目录信息写入上层目录中
	dm_write_blk(p_dir_blk,blk_info); 	
	new_emp_blk(blk_info);
	//文件起始块内容为空
	dm_write_blk(file_dir->nStartBlock,blk_info);
    
    freePtrs(p,q,blk_info,NULL);
    
	return 0;
}
//读出file_dir的属性到attr
void read_file_dir(u_fs_file_directory *attr,u_fs_file_directory *file_dir){
	//读出属性
	strcpy(attr->fname, file_dir->fname);
	strcpy(attr->fext, file_dir->fext);
	attr->fsize=file_dir->fsize;
	attr->nStartBlock=file_dir->nStartBlock;
	attr->flag=file_dir->flag;
}
//按路径打开文件或目录，读出属性到attr
int dm_open(const char * path, u_fs_file_directory *attr){
	//char* tag="open";	
	//fslog(tag,"path is %s\n",path);
	sb* sb_record;
	u_fs_disk_block *blk_info;    
    blk_info=malloc(sizeof(u_fs_disk_block));
	/* read the super block*/
	if(dm_read_blk(0,blk_info)==-1){
		fslog("readblk","%s325disk_path\n",disk_path);
		free(blk_info);
    	return -1;
	}	   	
    sb_record=(sb*)blk_info;    
    long start_blk;
    start_blk=sb_record->first_blk;
    
    char *p,*q,*tmp_path;
    tmp_path=strdup(path);
	p=tmp_path;		
	//tmp_path=/
    if(strcmp(path,"/")==0){ 
		attr->flag=2;
		attr->nStartBlock=start_blk;
		free(blk_info);
		return 0;
	}
	//处理路径
	if (!p){
		free(blk_info);
    	return -1;
	}		
	p++;
	q=strchr(p, '/');		
	if(q!=NULL){
		tmp_path++;  //tmp_path为上级目录名
		*q='\0'; 
		q++;
		p=q;      //p为文件名
	}
	q=strchr(p, '.');
	if(q!=NULL){ 
		*q='\0'; 
		q++;     //q为文件名
	}
	 
	//读出根目录块信息
    if(dm_read_blk(start_blk,blk_info)==-1){
		free(blk_info);
    	return -1;
	}
	//读出根目录文件信息
	u_fs_file_directory *file_dir=(u_fs_file_directory*)blk_info->data;
	int offset=0;	
	//fslog("open","%s\n",tmp_path);	
	
	if(*tmp_path!='/'){//上级目录为根目录下目录	
		while(offset<blk_info->size){//找目录
			if(strcmp(file_dir->fname,tmp_path)==0 && file_dir->flag==2){//找到该目录
				start_blk=file_dir->nStartBlock;//进入该目录
				break;
			}
			//没找到目录继续找
			file_dir++;
			offset+=sizeof(u_fs_file_directory);
		}
		//fslog("open385","%s\n",tmp_path);	
		//最终还是没找到。。
		if(offset==blk_info->size){
			//fslog("open388","%s\n",tmp_path);	
			free(blk_info);
			return -1;
		}
		//读出上级目录的块信息
		if(dm_read_blk(start_blk, blk_info)==-1){
			free(blk_info);
			return -1;
		}
		file_dir=(u_fs_file_directory*)blk_info->data;
	}
	//fslog("open399","%s\n",tmp_path);	
	offset=0;		
	while(offset<blk_info->size){//在文件/目录的上级目录中找文件/目录
		
		if(file_dir->flag!=0 && strcmp(file_dir->fname,p)==0 && (q==NULL || strcmp(file_dir->fext,q)==0)){ //find!
			//进入文件/目录所在块
			start_blk=file_dir->nStartBlock;
			//读出属性
			read_file_dir(attr,file_dir);
			free(blk_info);
			return 0;
		}
		//读下一个文件
		file_dir++;
		offset+=sizeof(u_fs_file_directory);
	}	
	//fslog("open415","%s\n",tmp_path);	
	free(blk_info);
    return -1;

}
int dm_read(const char *path, char *buf, size_t size, off_t offset){
	u_fs_file_directory *attr=malloc(sizeof(u_fs_file_directory));
	//按路径找到文件
    if(dm_open(path,attr)==-1) {
    	free(attr);
    	return -ENOENT;
    }
    //如果是路径则返回
    if(attr->flag==2){
    	free(attr);
    	return -EISDIR;
    }
    
    u_fs_disk_block *blk_info;    
    blk_info=malloc(sizeof(u_fs_disk_block));
    //根据文件信息读取文件内容
	if(dm_read_blk(attr->nStartBlock, blk_info)==-1){
		freePtrs(attr,blk_info,NULL);
    	return -1;
	}	
	//要读取的位置在文件范围内
	if(offset<attr->fsize){
		if (offset + size>attr->fsize)
             size=attr->fsize - offset;		
	} else size=0;
	int tmp=size;
	char *pt=blk_info->data;
	pt+=offset;
	strcpy(buf, pt);
	tmp -= blk_info->size;	
	while (tmp>0) {
		if(dm_read_blk(blk_info->nNextBlock, blk_info)==-1)
			break;
		strcat(buf,blk_info->data);	
		tmp -= blk_info->size;
	}
	freePtrs(attr,blk_info,NULL);
    return size;
}
int dm_readdir(const char *path, void *buf, fuse_fill_dir_t filler,off_t offset){
	u_fs_disk_block *blk_info=malloc(sizeof(u_fs_disk_block));
	u_fs_file_directory *attr=malloc(sizeof(u_fs_file_directory));
	if(dm_open(path,attr)==-1){//打开path指定的文件，将文件属性读到attr中
		freePtrs(attr,blk_info,NULL);
		return -ENOENT;
	}
    long start_blk=attr->nStartBlock;
    if(attr->flag==1){//是一个文件
		freePtrs(attr,blk_info,NULL);
		return -ENOENT;
	}
    if(dm_read_blk(start_blk, blk_info)){//读出内容到blk_info
		freePtrs(attr,blk_info,NULL);
		return -ENOENT;
	}
	filler(buf, ".", NULL, 0);
    filler(buf, "..", NULL, 0);
       	
	u_fs_file_directory *file_dir=(u_fs_file_directory*)blk_info->data;
	int pos=0;
	char name[MAX_FILENAME + MAX_EXTENSION + 2];		
	while(pos<blk_info->size){
		//读出文件名
		strcpy(name,file_dir->fname);
		if(strlen(file_dir->fext)!=0){
			strcat(name,".");
			strcat(name,file_dir->fext);
		}		
        if (file_dir->flag!=0 && name[strlen(name)-1]!='~' && filler(buf, name, NULL, 0))//将名字添加到buf
            break;
		file_dir++;
		pos+=sizeof(u_fs_file_directory);
	}
	
	freePtrs(attr,blk_info,NULL);
	return 0;
}
//用attr设置file_dir属性
void set_file_dir(u_fs_file_directory *attr,u_fs_file_directory *file_dir){
	strcpy(file_dir->fname, attr->fname);
	strcpy(file_dir->fext, attr->fext); 
	file_dir->fsize=attr->fsize;
	file_dir->nStartBlock=attr->nStartBlock;
	file_dir->flag=attr->flag;
}
//根据path找到文件，及其对应的指针，用attr的信息来设置文件属性
int dm_setattr(const char* path, u_fs_file_directory* attr)
{
	int res;
	u_fs_disk_block* blk_info=malloc(sizeof(u_fs_disk_block));
	
	fslog("write","%s:%d\n",path,attr->fsize);
	
	char *p=malloc(15*sizeof(char)),*q=malloc(15*sizeof(char));
	long start_blk;
	//拆分路径，找到父级目录块
	if((res=dv_path(p,q,path,&start_blk,1))){
		freePtrs(p,q,NULL);
		return res;
	}
	fslog("setattr","%d\n",start_blk);
	//读出该文件父目录信息
	if(dm_read_blk(start_blk, blk_info)==-1){
		res=-1;
		freePtrs(blk_info,NULL);
		return res;	
	}
	u_fs_file_directory *file_dir=(u_fs_file_directory*)blk_info->data;
	int offset=0;	
	while(offset<blk_info->size){
		//循环遍历块内容
		if(file_dir->flag!=0 && strcmp(p,file_dir->fname)==0 && (*q=='\0' || strcmp(q,file_dir->fext)==0)){//找到该文件
			//设置为attr指定的属性
			set_file_dir(attr,file_dir);
			res=0;
			fslog("set","find and set\n");
			break;
		}
		//读下一个文件
		file_dir++;
		offset+=sizeof(u_fs_file_directory);
	}
	freePtrs(p,q,NULL);
	//将修改后的目录信息写回磁盘文件
	if(dm_write_blk(start_blk, blk_info)==-1){
		res=-1;
	}
	fslog("set","write back\n");
	freePtrs(blk_info,NULL);
	return res;			
}
//从next_blk起清空blk_info后续块
void nextClear(long next_blk,u_fs_disk_block* blk_info){
	while(next_blk!=-1){
		dm_set_blk(next_blk,0);
		dm_read_blk(next_blk,blk_info);
		next_blk=blk_info->nNextBlock;
	}
}
//移除文件或文件夹
int dm_rm(const char *path,int flag)
{
	u_fs_file_directory *attr=malloc(sizeof(u_fs_file_directory));
	//读取文件属性
    if(dm_open(path,attr)==-1){
    	free(attr);
		return -ENOENT; 
    }
    //flag与指定的不一致
    if(flag==1 && attr->flag==2){
    	free(attr);
		return -EISDIR; 
    }
    else if (flag==2 && attr->flag ==1){
    	free(attr);
		return -ENOTDIR; 
    }
    //从起始块清空后续块
	u_fs_disk_block* blk_info=malloc(sizeof(u_fs_disk_block));    
    if(flag==1){
    	long next_blk=attr->nStartBlock;
		nextClear(next_blk,blk_info);
    }
    else if(!is_empty(path)){ //目录非空
			freePtrs(blk_info,attr,NULL);
			return -ENOTEMPTY;
	}
		
    attr->flag=0;//设置为未使用
    if(dm_setattr(path,attr)==-1){
		freePtrs(blk_info,attr,NULL);
    	return -1;
	}
	
	freePtrs(blk_info,attr,NULL);
	return 0;
}

//判断目录是否含有子目录或子文件
int is_empty(const char* path){
	
	u_fs_disk_block *blk_info=malloc(sizeof(u_fs_disk_block));
	u_fs_file_directory *attr=malloc(sizeof(u_fs_file_directory));
	//读取属性到attr里
	if(dm_open(path,attr)==-1){
		freePtrs(blk_info,attr,NULL);
		return 0;
	}
    long start_blk;
    start_blk=attr->nStartBlock;
    if(attr->flag==1){//传入路径为文件
		freePtrs(blk_info,attr,NULL);
		return 0;
	}  	
    if(dm_read_blk(start_blk, blk_info)==-1){//读出块信息
		freePtrs(blk_info,attr,NULL);
		return 0;
	}
	
	u_fs_file_directory *file_dir=(u_fs_file_directory*)blk_info->data;
	int pos=0;
	//遍历目录下文件，假如存在使用中的文件或目录，非空	
	while(pos<blk_info->size){
		
        if (file_dir->flag!=0){
			freePtrs(blk_info,attr,NULL);
			return 0;
		}
		file_dir++;
		pos+=sizeof(u_fs_file_directory);
	}
	
	freePtrs(blk_info,attr,NULL);
	return 1;
}

//根据块号移动块指针，读出内容到blk_info
int dm_read_blk(long blk,u_fs_disk_block * blk_info){
	
	FILE* fp;
	fp=fopen(disk_path, "r+");
	//fslog("FOPEN","%s558\n",disk_path);
	if(fp==NULL)
		return -1;
	//fslog("readblk","%s\n",disk_path);
	if(fseek(fp, blk*BLOCK_BYTES, SEEK_SET)!=0){
		fclose(fp);
	//	fprintf(stderr,"dm_read_blk error\n");
		return -1;
	}
	
	fread(blk_info, sizeof(u_fs_disk_block), 1, fp);
	if(ferror (fp) || feof(fp)){
		fclose(fp);
	//	fprintf(stderr,"dm_read_blk error\n");
		return -1;
	}
	fclose(fp);
	return 0;

}

//根据块号移动块指针，写入blk_info
int dm_write_blk(long blk,u_fs_disk_block * blk_info){
	FILE* fp;
	fp=fopen(disk_path, "r+");
	if(fp==NULL)
		return -1;
	if(fseek(fp, blk*BLOCK_BYTES, SEEK_SET)!=0){
		fclose(fp);
		return -1;
	}
	
	fwrite(blk_info, sizeof(u_fs_disk_block), 1, fp);
	if(ferror (fp) || feof(fp)){
		fclose(fp);
		return -1;
	}
	fclose(fp);
	return 0;
} 
//找到num个连续空闲块，得到空闲块区的起始块号start_block
int dm_search_free_blk(int num,long* start_blk){	
	//bitmap中super block和bitmap block区和rootdir
	//从头开始找
    *start_blk=1+BITMAP_LENGTH+1;
    int tmp=0;
	FILE* fp=NULL;
	fp=fopen(disk_path, "r+");
	if(fp==NULL)
		return 0;
	int start,left;
	unsigned int mask,f; 
    int *flag;
	
	int max=0;
	long max_start=-1;
	  
	while(*start_blk< total_block_num-1){
		//bitmap中一个byte，描述8个block（*start_blk）的使用情况，要处理8个以内的block时，需要位操作
		start=*start_blk/8;
		left=*start_blk%8;
		mask=1;
		mask<<=left;
		fseek(fp,BLOCK_BYTES+start,SEEK_SET);//跳过super block，跳到bitmap中start_blk指定位置
		flag=malloc(sizeof(int));
		fread(flag,sizeof(int),1,fp);//读出32个bit
		f=*flag;
		for(tmp=0; tmp<num; tmp++){
			if((f&mask)==mask)//mask为1的位，f中为1，该位被占用，为找连续块，跳出
				break;
			if((mask &0x80000000)== 0x80000000){//mask最高位为1，已移位到最高位，32个bit已读完
				//读下32bit
				fread(flag,sizeof(int),1,fp);
				f=*flag;
				mask=1;//指向32个bit的最低位
			}
			else //位为1,左移1位，检查下一位是否可用
				mask<<=1;
		}
		//tmp为找到的可用连续块数目
		if(tmp>max){
			//记录这个连续块的起始位
			max_start=*start_blk;
			max=tmp;
		}
		//如果后来找到的连续块数目少于之前找到的，不做替换
		//找到了num个连续的空白块
		if(tmp==num)
			break;
		//只找到了tmp个可用block，小于num，要重新找，如果能找到大于上一次找到的空闲块数，更新起始块号
		*start_blk=(tmp+1)+*start_blk;
		tmp=0;
		//找不到空闲块
		//fslog("free","succeed664");
		//if(max==0)return -1;	
	}
	*start_blk=max_start;
	fclose(fp);	
	int j=max_start;
	int i;
	for(i=0;i<max;++i){
		//找到的块标为已使用
		if(dm_set_blk(j++,1)==-1){
			free(flag);
			return -1;
		}
	}
	free(flag);
	return max;
	   
}


//在bitmap中标记块是否被使用
int dm_set_blk(long start_blk,int flag){

	if(start_blk==-1)
		return -1;
	//一个bit代表一个块的使用情况，一个byte代表8个块
	//小于8个块的部分，要移位后，操作第i个位
	int start=start_blk/8;
	int left=start_blk%8;
	int f;
	
	int mask=1;
	mask<<= left;
	
	FILE* fp=NULL;
	fp=fopen(disk_path, "r+");
	if(fp==NULL)
		return -1;
	fseek(fp,BLOCK_BYTES+start,SEEK_SET);
	int *tmp=malloc(sizeof(int));
	fread(tmp,sizeof(int),1,fp);
	f=*tmp;
	if(flag) //将该位置1，其他位不动
		f|= mask;
	else     //将该位置0，其他位不动
		f&= ~mask;
	
	*tmp=f;	
	fseek(fp,BLOCK_BYTES+start,SEEK_SET);
	fwrite(tmp,sizeof(int),1,fp);	
	fclose(fp);
	free(tmp);
	return 0;
}
int find_off_blk(long*start_blk,long*offset,u_fs_disk_block *blk_info){
	while(1){
		if(dm_read_blk(*start_blk, blk_info)==-1){
			return -errno;
		}
		//offset在当前块中，说明当前文件没有跨多个块，只要在当前块找offset即可
		if(*offset<=blk_info->size)
			break;		
		//否则要在后续块中找offset，先减去当前块容量（当前文件跨了很多个块）
		*offset-=blk_info->size;
		*start_blk=blk_info->nNextBlock;
	}
	return 0;
}
//将buf里大小为size的内容，写入path指定的起始块后的第offset个块（就像从指定行的第几个字符开始写的意思）
int dm_write(const char *path, const char *buf, size_t size,off_t offset){
	u_fs_file_directory *attr=malloc(sizeof(u_fs_file_directory));
	//打开path指定的文件，将文件属性读到attr中
	dm_open(path,attr);
	fslog("write","%s:%d\n",path,attr->fsize);
	 if(offset>attr->fsize){
    	free(attr);
    	return -EFBIG;
    }
    
    long start_blk=attr->nStartBlock;
	if (start_blk==-1){
    	free(attr);
        return -errno;
    }   
   
	int res;
	u_fs_disk_block *blk_info=malloc(sizeof(u_fs_disk_block));
	int para_offset=offset;
	
	int num;
	//fslog("write","blk_info:start_blk:%d\n",blk_info->nNextBlock);
	//找到offset指定的块位置
	if((res=(find_off_blk(&start_blk,&offset,blk_info)))){
		return res;
	}
	//fslog("write","blk_info:start_blk:%d\n",blk_info->nNextBlock);
	//找到offset所在块
	char* pt=blk_info->data;	
	//找到offset所在块中offset位置
	pt+=offset;	
	
	int towrite=0;
	int writen=0;
	//磁盘块剩余空间小于文件大小，则写满磁盘块剩余空间，否则写入整个文件
	towrite=(MAX_DATA_IN_BLOCK - offset<size ? MAX_DATA_IN_BLOCK -offset : size); 		 	
	strncpy(pt,buf,towrite);//写入长度为towrite的内容
	buf+=towrite;//移到待写处
	blk_info->size+=towrite;//已写增加towrite
	writen+=towrite;//已写
	size-=towrite;//待写
	
	//构造一个block作为待写入文件的新块
	long* next_blk=malloc(sizeof(long));
	if(size>0){
		//还有数据未写入
		//找到num个连续的空闲块写入
 		num=dm_search_free_blk(size/MAX_DATA_IN_BLOCK+1,next_blk);
 		//num可能小于size/MAX_DATA_IN_BLOCK+1，先写入一部分
		if(num==-1){
			freePtrs(attr,blk_info,next_blk,NULL);
			return -errno;
		}
		blk_info->nNextBlock=*next_blk;
		//start_blk更新为扩大了的块
		dm_write_blk(start_blk,blk_info);
		int i;
		while(1){
			for(i=0; i<num; ++i){
				//在新块写入size大小的数据，逻辑同前
				towrite=(MAX_DATA_IN_BLOCK<size ? MAX_DATA_IN_BLOCK : size);
				blk_info->size=towrite;
				strncpy(blk_info->data,buf,towrite);
				buf+=towrite;
				size-=towrite;
				writen+=towrite;
				
				if(size==0)//已写完则无后续块
					blk_info->nNextBlock=-1;
				else//未写完增加后续块
					blk_info->nNextBlock=*next_blk+1;
				//更新块为扩容后的块
				dm_write_blk(*next_blk,blk_info);
				*next_blk=*next_blk+1;
			}
			if(size==0)//已写完
				break;
			//num小于size/504+1,找到的num不够，继续找
			num=dm_search_free_blk(size/MAX_DATA_IN_BLOCK+1,next_blk);
			if(num==-1){
				freePtrs(attr,blk_info,next_blk,NULL);
				return -errno;																		
			}
		}		
	}
	else if(size==0){
		//块空间小于剩余空间
		//缓存nextblock
		long next_blk;
		next_blk=blk_info->nNextBlock;
		//终点块
		blk_info->nNextBlock=-1;
		dm_write_blk(start_blk,blk_info);
		//清理nextblock（原nextblock链不再需要）
		nextClear(next_blk,blk_info);
	}
	size=writen;
	
	//修改被写文件大小信息为写入起始位置+写入内容大小
	attr->fsize=para_offset+size;
	if(dm_setattr(path,attr)==-1){
		size=-errno;
	}
	fslog("writesucceed","%s:%d\n",path,size);
	freePtrs(attr,blk_info,next_blk,NULL);
	return size;
}

