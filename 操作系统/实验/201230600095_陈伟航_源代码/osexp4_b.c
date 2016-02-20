#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
void myLs(char*shellPathTemp)
{
	DIR *dp;
    	struct dirent *dirp;									
    	if ((dp=opendir(shellPathTemp)) == NULL)
    	{
        	printf("%s Can't open. \n",shellPathTemp);
        	return;
    	}
	
    	while ((dirp=readdir(dp)) != NULL)
    	{
		if(!strcmp(dirp->d_name,".")||!strcmp(dirp->d_name,".."))
		{
			continue;
		}
		else printf("\033[1m\033[35m%s\n\033[0m", dirp->d_name);
    	}
    	closedir(dp); 
	return;
}
int main(int argc, char *agrv[])
{
	myLs(agrv[1]);
	return 0;
}

