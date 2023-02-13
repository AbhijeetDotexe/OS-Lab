
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include<fcntl.h> 
#include<unistd.h> 

int main()
{
    int fd;
    fd=open("check.txt",O_CREAT | O_RDWR,0664);
    printf("Changed permission using chmod\n");
    chmod("check.txt",S_IRWXU);
}
