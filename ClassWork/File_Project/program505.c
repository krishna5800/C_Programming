#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>       

int main()
{
    int fd = 0;

    fd = open("LB.txt", O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    {
        printf("File gets successfully opened with fd : %d\n", fd);
        write(fd, "Jay Ganesh...", 13);
        close(fd);
    }

    return 0;
}