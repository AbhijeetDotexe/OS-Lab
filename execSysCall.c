#include<sys/wait.h>
#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0){
		printf("\nInside Child");
		execl("./B","B",NULL);
	}
	else{
		wait(NULL);
		printf("\nParent Completed!");
	}
}
