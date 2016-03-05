#ifndef GLOBAL
#define GLOBAL

#include <stddef.h>
#include <fuse.h>
#define BITMAP_LENGTH 1280 	// bitmap block的block数
#define MAX_DATA_IN_BLOCK 504		// 数据块能容纳的最大数据量=数据块容量-一个size_t的大小-一个long的大小 */
#define BLOCK_BYTES 512         	// 每块的容量为512byte       
#define MAX_FILENAME 8           	// 文件名的最大长度
#define MAX_EXTENSION 3         	// 文件扩展名的最大长度 

char* disk_path; 					//磁盘路径
long total_block_num; 

typedef struct {
     long fs_size;                    //size of file system, in blocks
     long first_blk;                   //first block of root directory
     long bitmap;                      //size of bitmap, in blocks
}sb;

typedef struct {
     size_t size;                      // how many bytes are being used in this block
     long nNextBlock;                  //The next disk block, if needed. This is the next pointer in the linked allocation list. else value -1
     char data[MAX_DATA_IN_BLOCK];     // And all the rest of the space in the block can be used for actual data storage（u_fs_file_dir）
}u_fs_disk_block ;

typedef struct {
     char fname[MAX_FILENAME + 2];      //filename (plus space for nul and backup ~)
     char fext[MAX_EXTENSION + 2];      //extension (plus space for nul and backup ~)
     size_t fsize;                      //file size, but for directory it doesn't need it
     long nStartBlock;                  //where the first block is on disk
     int flag;                          //indicate type of file. 0:for unused; 1:for file; 2:for directory
}u_fs_file_directory;

typedef long int ufs_DIR;              //the position value of dir_entry corresponds to the number of bytes 
									   //from the beginning of the image file
							  
#endif
