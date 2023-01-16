#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t pid;
	printf("Testing 1\n");
	printf("Testing 2\n");
	printf("Testing 3\n");
	fork();
	printf("Testing of child\n");
	pid = getpid();
	for(int i=1;i<=10;i++){
		printf("From process -->%d, value = %d\n",pid, i);
	}
	return(0);
}
