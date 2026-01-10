#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char fName[100] = {'\0'};
    char Buffer[100] = {'\0'};
    int iSum = 0;

    printf("Enter the name of file : \n");
    scanf("%s", fName);

    fd = open(fName, O_RDWR);

    if(fd != -1)
    {
        printf("File succesfully opened\n");

        printf("Data from file is : \n");

        while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
        {
            //write(1, Buffer, iRet);
            iSum = iSum+iRet;
        }

        printf("File size is %d bytes\n", iSum);

        close(fd);
    }
    else
    {
        printf("Their is no such file\n");
    }

    return 0;
}