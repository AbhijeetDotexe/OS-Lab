#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h> 
#include<sys/stat.h> 
void main()
{
  int n=26,ind=0;
  int fd,sizeRead,sizeWrite;
  char write_val[n], read_val[n]; 
  for(int i=97;i<123;i++)
  {
    write_val[ind]=i; 
    ind++;
  }
  fd=open("alphabets.txt",O_CREAT |O_RDWR, 0777);
  sizeWrite=write(fd, write_val,n);
  close(fd);
  fd=open("alphabets.txt",O_RDWR);
  sizeRead=read(fd,read_val,n); 
  close(fd);
  for(int i=0;i<n;i+=2)
  {
    printf("%c",read_val[i]);
  }
   printf("\n");
}
