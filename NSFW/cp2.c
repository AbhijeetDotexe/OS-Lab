#include<stdio.h>
#include<fcntl.h> 
#include<unistd.h> 
#include<sys/stat.h> 
int main()
{
    int n;
    printf("Enter value of n: "); 
    scanf("%d", &n);
    char write_value[n], read_value[n]; 
    int fd, fd_odd,fd_even;
    printf("Writing to All.txt: "); 
    for(int i=0;i<n;i++)
    {
            write_value[i] = (i+1) + '0'; printf("%c",write_value[i]);
    }
    printf("\n");
    fd = open("All.txt",O_CREAT | O_WRONLY, 0777); write(fd, write_value, n);
    close(fd);
    fd = open("All.txt",O_RDWR); read(fd, read_value, n);
    char write_odd[n/2], write_even[n/2]; int ind_odd=0,ind_even=0;
    for(int i=0;i<n;i++)
    {
        int temp = read_value[i];
        if (temp%2==0)
        {
            write_even[ind_even++] = read_value[i];
        } 
        else
        {
            write_odd[ind_odd++] = read_value[i];
        }
    }
    printf("Writing to odd.txt: "); 
    for(int j = 0; j <= n/2; j++) 
    {
        printf("%c ", write_odd[j]);
    }
    printf("\n");
    printf("Writing to even.txt: "); 
    for(int j = 0; j < n/2; j++) 
    {
        printf("%c ", write_even[j]);
    }
    printf("\n");
    fd_odd = open("odd.txt",O_CREAT | O_RDWR, 0777); 
    write(fd_odd, write_odd, n/2);
    close(fd_odd);
    fd_even = open("even.txt",O_CREAT | O_RDWR, 0777); write(fd_even, write_even, n/2);
    close(fd_even);
}
