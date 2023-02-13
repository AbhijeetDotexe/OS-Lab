
#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>

int main()
{
	int i;
	int pid = fork();
	if (pid==0)
	{
		for (i=0; i<10; i++)
			printf("I am Child\n");
	}
	else
	{
		sleep(15);
		printf("I am Parent\n");
	}
	return 0;
}
