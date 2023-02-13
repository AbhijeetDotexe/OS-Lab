#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid==0){
		printf("\noutput from child -> Hello, I am child!");
		printf("\n My process id - %d",getpid());
	}
	else{
		printf("\nOutput from parent -> Hello, I am parent!");
		printf("\nMy process id = %d", getpid());
		printf("\nMy child's id = %d", pid);
	}
	printf("\n Bye bye from both!");
	return(0);
}
