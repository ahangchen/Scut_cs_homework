#include<stdio.h>
#include <malloc.h>
#include <stdarg.h>
#define DISK "~/diskimg" 

void f(int*x){
	(*x)++;
}
void freePtrs(void*ptr,...){
	va_list argp;                   /* 定义保存函数参数的结构 */    
    int argno = 0;                  /* 纪录参数个数 */    
    char *para;                     /* 存放取出的字符串参数 */    
    va_start( argp, ptr );   
    free(ptr); 
    while (1)   
    {    
        para = va_arg( argp, void *);                 /*    取出当前的参数，类型为char *. */    
        if ( para==NULL )    
            break;    
        free(para);
        
        argno++;    
    }    
    va_end( argp );                                   /* 将argp置为NULL */    
    return;    
}
void myfree(void*ptr){
	free(ptr);
	ptr=NULL;
	//printf(*ptr);
}

void 
int main(){
	/*int x = 0;
	f(&x);
	printf("%d",x);*/
	char*str=malloc(sizeof(char)),*p=malloc(sizeof(char)),*q=malloc(sizeof(char));
	*str='s';*p='p';*q='q';
	printf("%d\n",*str);
	printf("%d\n",*p);
	printf("%d\n",*q);
	freePtrs(str,p,q,NULL);
	printf("%d\n",*str);
	printf("%d\n",*p);
	printf("%d\n",*q);
	myfree(str);
	myfree(p);
	myfree(q);
	if(str!=NULL)printf("%d\n",*str);
	printf("%d\n",*p);
	printf("%d\n",*q);
	
}
