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
		for(int i=1;i<=900000;i++){
			printf("%d-",i);
		}
	}
	else{
		wait(NULL);
		printf("\nParent Completed!");
	}
	return(0);
}
