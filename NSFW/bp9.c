#include<fcntl.h> 
#include<unistd.h> 
#include<sys/stat.h> 
#include<stdlib.h> 
#include<sys/wait.h> 
#include<stdio.h>
void main()
{
    pid_t pid;
    int fd;
    int linecount[3]={16,17,21};
     int startpoint[3]={0,17,33};
      for(int i=0;i<3;i++)
       {
          pid=fork(); 
          if(pid==0)
          {
             char read_value[linecount[i]]; 
             fd=open("check.txt",O_RDWR); 
             lseek(fd,startpoint[i],SEEK_SET); 
             read(fd, read_value,linecount[i]); 
             printf("%s\n",read_value); 
             close(fd);
             exit(0);
           }
           else
          {
             wait(NULL);
          }
       }
}
