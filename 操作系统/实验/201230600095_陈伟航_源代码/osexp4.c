#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/param.h>
#include <dirent.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/resource.h>

#define ORDER_LEN 16
#define COMMAND_LEN 16
#define PATH_LEN 128
#define FILE_LEN 1024*1024
#define INPUT_LEN 256
#define COMMAND_NUM 3
#define BACK_NUM 1024


char getcommand[INPUT_LEN];
char shellCommand[COMMAND_LEN];
char shell_args[PATH_LEN];
int  backFlag = 0;
char commandKind[COMMAND_NUM][COMMAND_LEN] = {"cd", "ls", "exit"};
char filePath[PATH_LEN];

void init_daemon()
{
	int pid;
	int i;
	pid=fork();
	if(pid<0)    
		exit(1);  //创建错误，退出
	else if(pid>0) //父进程退出
		exit(0);
		
	setsid(); //使子进程成为组长
	//pid=fork();
	//if(pid>0)
	//	exit(0); //再次退出，使进程不是组长，这样进程就不会打开控制终端
	//else if(pid<0)    
	//	exit(1);

	//关闭进程打开的文件句柄
	for(i=0;i<NOFILE;i++)
		close(i);
	chdir("/");  //改变目录
	umask(0);//重设文件创建的掩码
	return;
}
void showStatic()
{
	int who = RUSAGE_SELF;
	struct rusage usage;
	int success_flag;

	success_flag = getrusage(who, &usage);
	
	if (success_flag == -1)
	{
		printf("获取进程数据失败！ \n");
	}
	else
	{
		long user_time = usage.ru_utime.tv_sec*1000 + usage.ru_utime.tv_usec/1000;
		long sys_time = usage.ru_stime.tv_sec*1000 + usage.ru_stime.tv_usec/1000;
		long nivcsw = usage.ru_nivcsw;
		long nvcsw = usage.ru_nvcsw;
		long iopf = usage.ru_majflt;
		long uniopf = usage.ru_minflt;
		long pft=iopf+uniopf;
		printf("用户态时间(ms): %ld \n", user_time);
		printf("系统态时间(ms): %ld \n", sys_time);
		printf("进程被抢占的次数: %ld \n", nivcsw);
		printf("进程主动放弃CPU的次数: %ld \n", nvcsw);
		printf("缺页中断次数: %ld \n", pft);
		printf("\n");
	}
}

void getCommand()
{
	int i;
	for(i=0; i<COMMAND_LEN; i++)
	{
		shellCommand[i] = '\0';
	}
	
	for(i=0; i<PATH_LEN; i++)
	{
		shell_args[i] = '\0';
	}
	
	for(i=0; i<INPUT_LEN; i++)
	{
		getcommand[i] = '\0';
	}
	i = 0;
	printf("doit(如果是后台进程，在命令最后添加&)$");
	char c;
	c = getchar();
	scanf("%[^\n]", getcommand);
	
	int commandLen = 0;
	commandLen = strlen(getcommand);

	int count = 0;
	int count_path = 0;
	int count_command = 0;
	
	
	//后台运行指令
	if(getcommand[commandLen-1] == '&')
	{
		backFlag = 1;
		getcommand[commandLen-1]='\0';
	}
	//指令
	while(getcommand[count] != ' ' && count<commandLen)
	{
		shellCommand[count_command] = getcommand[count];
		count_command++;
		count++;
	}
	//空格
	while(getcommand[count] == ' ' && count<commandLen)
	{
		count++;
	}
	//命令参数
	while(getcommand[count]!=' ' && count<commandLen)
	{
		shell_args[count_path] = getcommand[count];
		count_path++;
		count++;
	}
}


void myCd()
{
	char temp[PATH_LEN];
		
	if (opendir(shell_args) == NULL)
	{
		printf("无效的路径 \n");
		return;
	}
	else
	{
		chdir(shell_args);
	}
	
	getcwd(temp, PATH_LEN);
	printf("当前目录切换为: %s \n", temp);	
	printf("\n");
	
	return;
}

char* getPath(char* path,char* filename)
{//获取文件路径
	int len1=strlen(path);
	int len2=strlen(filename);
	char* str=(char*)malloc(len1+len2+2);
	str[0]='\0';
	str=strcat(str,path);
	if(path[len1-1]!='/')	str=strcat(str,"/");
	str=strcat(str,filename);
	return str;
}

void myLs(char*shell_argsTemp)
{
	struct stat stat_buf;
	DIR *dp;
    struct dirent *dirp;									
    if ((dp=opendir(shell_argsTemp)) == NULL)
    {
       	printf("%s Can't open. \n",shell_argsTemp);
       	return;
    }
	while ((dirp=readdir(dp)) != NULL)
    {
		if(lstat(getPath(shell_argsTemp,dirp->d_name),&stat_buf)!=0)
		{
			perror("function stat error");
			printf("stat path:%s\n",shell_argsTemp);
			continue;
		}
		if(S_ISDIR(stat_buf.st_mode)&&strcmp(dirp->d_name,".")!=0&&strcmp(dirp->d_name,"..")!=0)
		{
			
			printf("\033[1m\033[33mdir:%s\n\033[0m",dirp->d_name);
			//myLs(getPath(shell_argsTemp,dirp->d_name));//ls不需要递归查找子目录
		}
		else if(!strcmp(dirp->d_name,".")||!strcmp(dirp->d_name,".."))
		{
			continue;
		}
		else printf("\033[1m\033[32m%s\n\033[0m", dirp->d_name);
    }
    closedir(dp); 
    
    return;
}
void externalCmd()
{
	char file_path[PATH_LEN];
	strcpy(file_path, "/bin/");	
	strcat(file_path, shellCommand);
	
	char *argv1[] = {shellCommand,shell_args, (char *)0};
	
	getcwd(filePath, PATH_LEN);//获取当前目录路径
	
	char *envp1[] = {0};
	
	if (-1 == execve(file_path, argv1, envp1))  
	{  
		perror( "execve failed" );  
		exit( EXIT_FAILURE);  
	}  
	//else exit(0);
}

void commandExecute()
{
    	struct timeval tv_beg;
    	struct timeval tv_end;	
    	struct timezone tz_beg;
    	struct timezone tz_end;
		int temp = -1;
    	int process_pid = 0,process_pid2=0;
    	int status = 0;  
    	int walk_clock_time = 0;
    	int i = 0;
    	//printf("%d\n",backFlag);
		
    	while(1)
    	{   
			//获取进程运行前系统时间					
			gettimeofday(&tv_beg, &tz_beg);
					
			//获取命令
			getCommand();
			//判断是第几个命令
			for(i=0; i<COMMAND_NUM; i++)
			{
				if(strcmp(shellCommand, commandKind[i]) == 0)
				{
					temp = i;
					break;
				}
			}
			if(backFlag)
			{
				init_daemon();
			}
			
			switch(temp)
			{
			case 0:
				//printf("%d\n",temp);
				myCd();
				break;
			case 1:
				//printf("%d\n",temp);
				getcwd(shell_args, PATH_LEN);//get the current directory
				myLs(shell_args);
				break;
			case 2:
				//printf("%d\n",temp);
				printf("等待后台进程.... \n");
				waitpid(-1, &status, 0);
				printf("所有后台进程运行结束! \n");
				return;
			case -1:
				//printf("%d\n",temp);
				process_pid=fork();
				if(process_pid==0)
				{
					printf("other command\n");
					externalCmd();
					showStatic();	
					exit(0);
				}
				else waitpid(process_pid, &status, 0);
				break;
			default:
				continue;
			}
			temp=-1;
			//获取进程运行后系统时间
			gettimeofday(&tv_end, &tz_end);
			
			walk_clock_time = (tv_end.tv_sec - tv_beg.tv_sec)*1000 + (tv_end.tv_usec - tv_beg.tv_usec)/1000;	
			printf("\n");		
			printf("进程运行时间 (ms): %d \n", walk_clock_time);
			showStatic();
			if(backFlag)
			{
				
			}		
		}
}
		
	
   
void shellPrompt()
{
    	while(1)
    	{
    		char order[ORDER_LEN];
    	
    		printf("myshell$");//提示符
    		scanf("%s", order); 			
    
    		if (strcmp(order, "doit") == 0)
		{
			commandExecute();
		}
		else
		{
			if (strcmp(order, "exit") == 0)
			{
				return;
			}
			else
			{
				continue;
			}
		}
	}
}

int main(int argc, char *agrv[])
{
	getcwd(filePath, PATH_LEN);//获取当前目录路径
	shellPrompt();	
	return 0;
}
