#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
	pid_t pid;
	if((pid=fork())<0)
	{
		printf("fork failed\n");
		exit(1);
	}
	else
	{
		execl("./an_ch2_1b.out"," ",NULL);
	}
	return 0;
}

