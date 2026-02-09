// CLIENT APPLICATION //

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>
#include<stdbool.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>

////////////////////////////////////////////////////////////////////////////
//  
//  Commandline Argument Application
//  1st Argument : IP Address
//  2nd Argument : Port Number
//  3rd Argument : Target file name
//  4th Argument : New file name 
//  
//  ./client    127.0.0.1   9000    Demo.txt    A.txt
//  argv[0]     argv[1]     argv[2] argv[3]     argv[4]
//  
//  argc = 5
//
////////////////////////////////////////////////////////////////////////////

int main(int argc, char * argv[])
{
    int Port = 0;                   // argv[2]
    int Sock = 0;
    int iRet = 0;

    char *ip = NULL;                // argv[1]
    char *FileName= NULL;           // argv[3]
    char *OutFileName = NULL;       // argv[4]

    struct sockaddr_in ServerAddr;

    if(argc < 5 || argc > 5)
    {
        printf("Unable to preceed as invalid number of arguments\n");

        printf("Please provide below arguments : \n");

        printf("1st Argument : IP Address\n");
        printf("2nd Argument : Port Number\n");
        printf("3rd Argument : Target file name\n");
        printf("4th Argument : New file name\n");

        return -1;
    }

    // Store commandline arguments into the variables
    ip = argv[1];
    Port = atoi(argv[2]);
    FileName = argv[3];
    OutFileName = argv[4];

////////////////////////////////////////////////////////////////////////////
//  Step 1 : Create TCP socket
////////////////////////////////////////////////////////////////////////////

    Sock = socket(AF_INET, SOCK_STREAM, 0);

    if(Sock < 0)
    {
        printf("Unable to create the client socket\n");
        return -1;
    }

////////////////////////////////////////////////////////////////////////////
//  Step 2 : Connect with server
////////////////////////////////////////////////////////////////////////////

    memset(&ServerAddr, 0, sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_port = htons(Port);

    // Convert IP address into binary format
    inet_pton(AF_INET, ip, &ServerAddr.sin_addr);

    iRet = connect(Sock, (struct sockaddr *)&ServerAddr, sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Unable to connect with server\n");

        close(Sock);

        return -1;
    }

    // Sending file name to server
    write(Sock, FileName, strlen(FileName));

    return 0;
}// End of main