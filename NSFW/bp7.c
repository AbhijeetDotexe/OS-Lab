#include<stdio.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h>

int main()
{
	pid_t pid; 
	pid = fork();
	if (pid==0)
	{
	         execl("./b", "B Program", NULL);
	}
	else
	{
	        wait(NULL);
                printf("\nFrom Parent Process.."); 
                printf("\nParent Closed");
	}
	printf("\n");
	return 0;
}

b.c

#include<stdio.h>
#include<unistd.h> 
#include<sys/types.h> 
#include<stdlib.h>
#include<stdio.h> 
#include<fcntl.h>
void main()
{ 	
  int n;
  for(int i=1; i<10; i++)
  {
    int flag=0;
    for(int j=2; j<=i/2; j++)
     {
        if(i%j==0)
         {
            flag=1; 
           break;
         }
    }
    if(i==1)
    {
        printf("\n1 is neither Prime nor Composite..\n");
    }
    else
    {
        if(flag==0)
         {
            printf("%d is a Prime Number..\n",i);
         }
    }
  }
}