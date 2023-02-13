#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0){
		printf("We are inside pid=0 the program is about to exit\n");
		exit(0);
	}
	else{
		printf("We are inside the else block \n");
		sleep(15);
	}
	return(0);
}
