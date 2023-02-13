#include<stdio.h> 
#include<fcntl.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/stat.h> 
#include<sys/wait.h>

int main()
{
	int i;
	pid_t pid; 
	pid = fork();
	if (pid==0)
	{
		for (i=0; i<5; i++)
			printf("\nChild Process Count: %d",i);
                 printf("\nChild Process Id:%d",getpid()); 
                 printf("\nChild Closed");
	}
	else
	{
	        wait(NULL);
                printf("\nFrom Parent Process.."); 
                printf("\nParent Process Id: %d",getpid()); 
                printf("\nParent's Child Id: %d",pid); 
                printf("\nParentClosed");
	}
	printf("\n");
	return 0;
}

