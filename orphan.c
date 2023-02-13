#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0){
		sleep(10);
		printf("\nChild complete!\n");
	}
	else{
		printf("\nParent complete!\n");
	}
	return(0);
}
