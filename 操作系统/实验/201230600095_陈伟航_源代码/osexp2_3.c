#include <stdlib.h>
#include <sys/mman.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include<string.h> 
#include <linux/sem.h>
#include <sys/types.h>
struct sembuf buf;
typedef struct
{
int n;
}Count;
Count*rc;
Count*wc;
int down(int sem_id)
{
	buf.sem_num = 0;
	buf.sem_op = -1;
	buf.sem_flg = SEM_UNDO;
	if (semop(sem_id, &buf, 1) == -1)
	{
		perror("Down failed!\n");
		return 0;
	}
	return 1;
}
int up(int sem_id)
{
	buf.sem_num = 0;
	buf.sem_op = 1;
	buf.sem_flg = SEM_UNDO;
	if (semop(sem_id, &buf, 1) == -1)
	{
		perror("Up failed!\n");
		return 0;
    	}
    	return 1;
}

int first_read,_write,write_first;
int rc_mutex,wc_mutex;
void reader()
{
	down(write_first);//如果有写进程，第一个读者在first_read排队，第二个读者在这里排队，保证写者优先
	down(first_read);//第一个读进程会因为存在写进程而在这里排队，写者只需要跟第一个读进程争夺first_read信号量，直到没有写者才会释放
	printf("\033[1m\033[33mreader come\n\033[0m");
	down(rc_mutex);
	(*rc).n++;
	printf("\033[1m\033[33mwaiting readers count: %d\n\033[0m",(*rc).n);
	if((*rc).n==1)down(_write);
	up(rc_mutex);
	printf("\033[1m\033[33mreader in\n\033[0m");
	up(first_read);//没有写进程了，第一个读者进入
	up(write_first);//第一个读者释放write_first，第二个读者在first_read排队，如果还没有写进程，第二个读者也进入，读者可以一起读
	printf("\033[1m\033[33mreading\n\033[0m");
	sleep(2);
	printf("\033[1m\033[33mread over\n\033[0m");
	down(rc_mutex);
	(*rc).n--;
	printf("\033[1m\033[33mreader out\n\033[0m");
	printf("\033[1m\033[33mwaiting readers count: %d\n\033[0m",(*rc).n);
	if((*rc).n==0)up(_write);
	up(rc_mutex);	
	printf("\n\033[0m");
}

void writer()
{
	down(wc_mutex);
	(*wc).n++;
	if((*wc).n==1)down(first_read);//第一个写进程与临界区里的读者争夺first_read,之后的写进程不需争夺
	up(wc_mutex);
	printf("\033[1m\033[32mwriter in\n\033[0m");
	down(_write);
	printf("\033[1m\033[32mwriting\n\033[0m");
	sleep(1);
	printf("\033[1m\033[32mwrite over\n\033[0m");
	up(_write);
	down(wc_mutex);
	(*wc).n--;
	if((*wc).n==0)up(first_read);
	printf("\033[1m\033[32mwriter out\n\033[0m");
	up(wc_mutex);
	printf("\n\033[0m");
}
void main()
{
	rc=(Count*)mmap(NULL, sizeof(Count),PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	(*rc).n=0;
	wc=(Count*)mmap(NULL, sizeof(Count),PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	(*wc).n=0;
	union semun arg;
	arg.val = 1;
	first_read = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
	_write = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
	write_first=semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
	rc_mutex = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
	wc_mutex = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
	semctl(first_read, 0, SETVAL, arg);
	semctl(_write, 0, SETVAL, arg);
	semctl(write_first, 0, SETVAL, arg);
	semctl(rc_mutex, 0, SETVAL, arg);
	semctl(wc_mutex, 0, SETVAL, arg);
	pid_t pid[7];
	if(pid[0]=fork()==0)
	{
		writer();
	}
	else if(pid[1]=fork()==0)
	{
		sleep(1);
		reader();
	}
	else if(pid[2]=fork()==0)
	{
		reader();
	}
	else if(pid[3]=fork()==0)
	{
		sleep(2);
		reader();
	}
	else if(pid[4]=fork()==0)
	{
		sleep(1);
		reader();
	}
	else if(pid[5]=fork()==0)
	{
		sleep(1);
		writer();
	}
	else if(pid[6]=fork()==0)
	{
		sleep(1);
		writer();
	}

}
