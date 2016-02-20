#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<errno.h>
#include<sys/ipc.h>
#include<semaphore.h>
#include<fcntl.h>
#define n 5
sem_t mutex,customers,barbers;
int count=0;
void barber(void*arg)
{
	while(1)
	{
		sem_wait(&mutex);
		if(count==0)printf("\033[1m\033[33mno customer,barber sleeping\n\033[0m");
		sem_post(&mutex);
		sem_wait(&customers);
		sem_wait(&mutex);
		count--;
		printf("\033[1m\033[33mcutting hair,%d customers waiting\n\033[0m",count);
		sem_post(&mutex);
		sem_post(&barbers);
		sleep(3);
	}
}
void customer(void*arg)
{
	sem_wait(&mutex);
	if(count<n)
	{
		count++;
		printf("\033[1m\033[32mone customer enter, %d customers waiting\n\033[0m",count);
		sem_post(&mutex);
		sem_post(&customers);
		sem_wait(&barbers);
	}
	else
	{
		sem_post(&mutex);
		printf("\033[1m\033[34mcustomer leave for full\n\033[0m");
	}
}
void main()
{
	pthread_t b,c[10];
	sem_init(&mutex,0,1);
	sem_init(&customers,0,0);
	sem_init(&barbers,0,1);
	sem_init(&count_mutex,0,1);
	pthread_create(&b,NULL,(void*)barber,NULL);
	int i;
	for(i=0;i<10;i++)
	{
		pthread_create(&c[i],NULL,(void*)customer,NULL);
		sleep(1);
	}
	pthread_join(b,NULL);
	pthread_join(c,NULL);
}
