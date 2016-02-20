#include <stdlib.h>
#include <sys/mman.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <linux/sem.h>
#include <sys/types.h>

#define MAX_PRODUCTS 10
struct sembuf buf;

int down(int sem_id)
{
	buf.sem_num = 0;
	buf.sem_op = -1;
	buf.sem_flg = SEM_UNDO;
	if (semop(sem_id, &buf, 1) == -1)
	{
		perror("Down failed!/n");
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
		perror("Up failed!/n");
		return 0;
    	}
    	return 1;
}

void main()
{
	union semun arg;
	pid_t producer1, producer2;
	pid_t consumer1, consumer2, consumer3;

	int mutex;
	int full;
	int empty;
	char *buffer;

    	buffer = (char*) mmap(NULL, sizeof(char) * MAX_PRODUCTS,
            PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);
	int i;
	for (i = 0; i < MAX_PRODUCTS; i++)
        	buffer[i] = ' ';

    	mutex = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
    	full = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
    	empty = semget(IPC_PRIVATE, 1, 0666 | IPC_CREAT);
    	arg.val = 1;
    	if (semctl(mutex, 0, SETVAL, arg) == -1)
    	{
        	perror("set the mutex error\n");
        	return;
    	}
    	arg.val = 0;
    	if (semctl(full, 0, SETVAL, arg) == -1)
    	{
        	perror("set the full error\n");
        	return;
    	}
    	arg.val = 10;
    	if (semctl(empty, 0, SETVAL, arg) == -1)
    	{
        	perror("set the empty error/n");
        	return;
    	}

    	if ((producer1 = fork()) == 0)
    	{
        	while (1)
        	{
            		down(empty);
            		down(mutex);
            		srand(time(NULL));
            		int offset = rand() % 26;
            		char item = 'A' + offset;
            		int j;
            		for (j = 0; j < MAX_PRODUCTS; j++)
            		{
                		if (buffer[j] == ' ')
                		{
                    			buffer[j] = item;
                    			printf("\033[1m\033[32mProducer 1 insert letter: %c\n\033[0m", item);
                    			break;
                		}
            		}
            		up(mutex);
            		up(full);
            		sleep(1);
        	}
    	}
    	else if ((producer2 = fork()) == 0)
    	{
        	while (1)
        	{
            		down(empty);
            		down(mutex);
            		srand(time(NULL));
            		int offset = rand() % 26;
            		char item = 'a' + offset;
            		int j;
            		for (j = 0; j < MAX_PRODUCTS; j++)
			{
                		if (buffer[j] == ' ')
                		{
                    			buffer[j] = item;
				    	printf("\033[1m\033[32mProducer 2 insert letter: %c\n\033[0m", item);
				    	break;
				}
			}
		    up(mutex);
		    up(full);
		    sleep(1);
		}
	}
    	else if ((consumer1 = fork()) == 0)
    	{
        	while (1)
        	{
            		down(full);
            		down(mutex);
            		char item;
            		int j;
			for (j = 0; j < MAX_PRODUCTS; j++)
			{
                		if (buffer[j] >= 'A' && buffer[j] <= 'Z')
                		{
                    			item = buffer[j];
                    			buffer[j] = ' ';
                    			break;
                		}
            		}
            		printf("\033[1m\033[33mConsumer A removes letter: %c\n\033[0m", item);
            		up(mutex);
            		up(empty);
            		sleep(1);
        	}
    	}
    	else if ((consumer2 = fork()) == 0)
    	{
        	while (1)
        	{
            		down(full);
            		down(mutex);
            		char item;
            		int j;
            		for (j = 0; j < MAX_PRODUCTS; j++)
            		{
                		if (buffer[j] >= 'a' && buffer[j] <= 'z')
                		{
                    			item = buffer[j];
                    			buffer[j] = ' ';
                    			break;
                		}
            		}
            		printf("\033[1m\033[33mConsumer B removes letter: %c\n\033[0m", item);
            		up(mutex);
            		up(empty);
            		sleep(2);
        	}
    	}
    	else if ((consumer3 = fork()) == 0)
    	{
        	while (1)
        	{
            		down(full);
            		down(mutex);
            		char item;
            		int j;
            		for (j = 0; j < MAX_PRODUCTS; j++)
            		{
                		if (buffer[j] != ' ')
                		{
                    			item = buffer[j];
                    			buffer[j] = ' ';
                    			break;
                		}
            		}
            		printf("\033[1m\033[33mConsumer C removes letter: %c\n\033[0m", item);
            		up(mutex);
            		up(empty);
            		sleep(3);
       	 	}
    	}
    	else
    	{
       	 	// 主进程
        	while (1)
        	{
            		int j;
            		printf("Buffer: ");
            		for (j = 0; j < MAX_PRODUCTS; j++)
            		{
                		printf("%c ", buffer[j]);
            		}
            		printf(" \n\n");
            		sleep(7);
        	}
    	}
}
