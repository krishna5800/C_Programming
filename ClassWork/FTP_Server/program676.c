#include<stdio.h>

int main(int argc, char * argv[])
{
    printf("Number of commandline arguments are : %d\n", argc);
    
    if(argc != 5)
    {
        printf("Unable to procees as invalid number of arguments\n");

        printf("Please provide : \n");
        printf("IP address\nPort number\nTargated File name\nNew File name\n");
        return -1;
    }

    printf("Executable name : %s\n", argv[0]);
    printf("IP address : %s\n", argv[1]);
    printf("Port number : %s\n", argv[2]);
    printf("Targated f : %s\n", argv[3]);
    printf("New File name: %s\n", argv[4]);

    return 0;
}