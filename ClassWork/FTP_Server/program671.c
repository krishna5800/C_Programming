// CLIENT CODE

#include<stdio.h>       // printf, scanf
#include<stdlib.h>      // malloc, free
#include<string.h>      // memset, memcmp
#include<unistd.h>      // MACRO, close, write, read
#include<fcntl.h>       // creat, unlink, etc

#include<sys/socket.h>  // socket, bind, accept, listen, connect
#include<netinet/in.h>  // sockaddr_in , htons

#include<arpa/inet.h>   // for inet_pton

int main()
{
    int ServerSocketFd = 0;
    int iRet = 0;
    int Port = 11000;

    struct sockaddr_in ServerAddr;

    // Step 1 : Create TCP socket

    ServerSocketFd = socket(AF_INET, SOCK_STREAM, 0);

    if(ServerSocketFd < 0)
    {
        printf("Unable to create socket\n");
        return -1;
    }

    printf("Socket gets created successfully with fd : %d\n", ServerSocketFd);

    // Step 2 : Connect with server

    memset(&ServerAddr, 0, sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_port = htons(Port);

    // 127.0.0.1 --> Binary Form
    inet_pton(AF_INET, "127.0.0.1", &ServerAddr.sin_addr);  // Issue Resolved by including header file

    iRet = connect(ServerSocketFd, (struct sockaddr *) &ServerAddr, sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Unable to connect with server\n");
        return -1;
    }

    printf("Client successfully connected qith server\n");

    return 0;
}