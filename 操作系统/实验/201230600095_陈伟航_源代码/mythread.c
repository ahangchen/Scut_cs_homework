#include <stdio.h>
#include <pthread.h>
int share_var;
void thread(void)
{
	while(1)
	{
		share_var--;
		printf("child:%d\n",share_var);
		sleep(1);
	}
}

int main(void)
{
	share_var=0;
	pthread_t id;
	int i,ret;
	ret=pthread_create(&id,NULL,(void *) thread,NULL);
	if(ret!=0)
	{
		printf ("Create pthread error!\n");
		exit(0);
	}

	while(1)
	{
		share_var++;
		printf("main:%d\n",share_var);
		sleep(1);
	}
	pthread_join(id,NULL);
	return 0;
}
