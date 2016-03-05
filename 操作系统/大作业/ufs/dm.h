#ifndef DM_H
#define DM_H

#include "global.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * 
 * 
 */
int logFlag;
/**
 * 日志函数，输出运行状态信息，便于调试
 * tag:标识符
 * format:字符串给事
 * ... ：可变输出参数
 */
void fslog(const char* tag,const char* format,...);
/*
 * 可变参数函数释放指针
 * ptr：需要free的指针
 * ...
 */
void freePtrs(void*ptr,...);
/*
 *小函数辅助文件处理
 */
 
/**
 * 分割路径，读取父目录信息
 * 传入：
 * path:文件(目录)路径
 * flag:文件类型：
 * name:文件/目录名
 * ext: 拓展名，如果没有拓展名，为"\0"
 * p_dir_blk: 指向父目录块号的指针
 */
int dv_path(char*name,char*ext,const char*path,long*p_dir_blk,int flag);

/**
 * 遍历目录下的所有文件和目录，如果已存在同名文件或目录，返回-EEXIST，否则返回0
 * 参数：
 * file_dir:要遍历的目录
 * p:文件/目录名
 * q:拓展名或"\0"
 * size:目录大小
 * flag:文件类型
 * offset:找到的同名文件在目录中的位置，找不到则为size
 * pos:flag为0的位置
 */
int exist_check(u_fs_file_directory *file_dir,char *p,char *q,int* offset,int* pos,int size,int flag);
	
/**
 * 初始化一个u_fs_disk_block
 * 初始化blk_info的u_fs_disk_block
 */
void new_emp_blk(u_fs_disk_block *blk_info);

/**
 * 初始化一个u_fs_file_directory，并设置名字与类型
 * 传入：
 * name:文件名
 * ext: 拓展名
 * flag: 文件类型
 * 传出：
 * file_dir:构造的文件或目录
 */
void init_file_dir(u_fs_file_directory *file_dir,char*name,char*ext,int flag);

/**
 * 为上层目录增加一个后续块，成功返回0，失败（找不到空闲块）返回-errno
 * 传入：
 * p_dir_blk:上层目录块号
 * file_dir:添加在上层目录最后的新文件
 * blk_info:上层目录块信息
 * tmp：跟踪空闲块位置
 * p:新文件/目录名
 * q:拓展名（可以是\0）
 * flag:文件类型
 */
int enlarge_blk(long p_dir_blk,u_fs_file_directory *file_dir,u_fs_disk_block *blk_info,long *temp,char*p,char*q,int flag);

/**
 * 读出file_dir的属性到attr
 * 参数：
 * file_dir：文件或目录对象
 * attr:承载file_dir属性
 */
void read_file_dir(u_fs_file_directory *attr,u_fs_file_directory *file_dir);

/**
 * 用attr设置file_dir属性
 * 参数：
 * file_dir：文件或目录对象
 * attr:用于设置file_dir的属性
 */
void set_file_dir(u_fs_file_directory *attr,u_fs_file_directory *file_dir);

/**
 * 从next_blk起清空blk_info后续块
 * 参数：
 * blk_info:要截尾的目录
 * next_blk:截取的起始地址
 */
void nextClear(long next_blk,u_fs_disk_block* blk_info);

/**
 * 按起始块和偏移量，找到偏移量所在块，成功返回0，失败返回-1
 * 参数：
 * start_blk：起始块号
 * offset：偏移量
 * blk_info：偏移量所在块的块信息
 */
int find_off_blk(long*start_blk,long*offset,u_fs_disk_block *blk_info);

/** 
 * 判断目录是否含有子目录或子文件,有则返回1，无则返回0
 * path：目录路径
 */
int is_empty(const char* path);

/** 
 * 根据块号移动块指针，读出内容到blk_info，成功返回0，失败返回-1
 * 参数：
 * blk：要读的块的块号
 * blk_info：承载读到的块信息
 */
int dm_read_blk(long blk,u_fs_disk_block * blk_info);

/** 
 * 根据块号移动块指针，写入blk_info，成功返回0，失败返回-1
 * 参数：
 * blk：要写入的块的块号
 * blk_info：承载要写入的块信息
 */
int dm_write_blk(long blk,u_fs_disk_block * blk_info);

/**
 * 找到num个连续空闲块，得到空闲块区的起始块号start_block，返回找到的连续空闲块个数（找不到返回0）
 * 参数：
 * num:要寻找的连续空闲块个数
 * start_blk:找到的空闲块区的起始块号
 */
int dm_search_free_blk(int num,long* start_blk);

/**
 * 在bitmap中标记块是否被使用,标记成功返回0，失败返回-1
 * 参数：
 * blk: 被标记的块的块号
 * flag:1或0，被使用或未使用
 */
int dm_set_blk(long blk,int flag);

//实现ufs文件系统的底层操作函数和块操作函数

/*
 * 按路径打开文件或目录，读出属性到attr
 * 读取失败返回-1，成功返回0
 * 参数：
 * path：读取的文件路径
 * attr：承载读出来的文件信息
 */
int dm_open(const char * path, u_fs_file_directory *attr);

/**
 * 根据路径建立空文件或空目录
 * io含义见u_fs_mknod和u_fs_mkdir
 */
int dm_create(const char *, int flag);

/**
 * 根据path找到文件，及其对应的指针，用attr的信息来设置文件属性
 * io含义同u_fs_setattr
 */
int dm_setattr(const char* path, u_fs_file_directory * attr);

/**
 * 移除文件或文件夹
 * io含义同u_fs_rm
 */
int dm_rm(const char *path,int flag);


/**
 * 将buf里大小为size的内容，写入path指定的起始块后的第offset个块（就像从指定行的第几个字符开始写的意思）
 * io含义同u_fs_write
 */
int dm_write(const char *path, const char *buf, size_t size,off_t offset);

/**
 * 按path打开文件，从offset指定位置开始读出数据到buf中，返回文件大小
 * io含义同u_fs_read
 */
int dm_read(const char *path, char *buf, size_t size, off_t offset);

/**
 * 根据路径找到目录，将目录信息读入buf中
 * io含义同u_fs_readdir
 */
int dm_readdir(const char *path, void *buf, fuse_fill_dir_t filler,off_t offset);

#endif
