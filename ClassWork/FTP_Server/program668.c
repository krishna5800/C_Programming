// SERVER CODE

#include<stdio.h>       // printf, scanf
#include<stdlib.h>      // malloc, free
#include<string.h>      // memset, memcmp
#include<unistd.h>      // MACRO, close, write, read
#include<fcntl.h>       // creat, unlink, etc

#include<sys/socket.h>  // socket, bind, accept, listen, connect
#include<netinet/in.h>  // sockaddr_in , htons

/*

struct sockaddr
{   
    sa_family_t sa_family;
    char sa_data[14];
};

*/

int main()
{
    int ServerSocket = 0;
    int iRet = 0;
    int Port = 11000;

    struct sockaddr_in ServerAddr;      // Internal Structure (In Built) this is in <sys/socket.h> header file 

    // Step 1 : Create TCP socket

    ServerSocket = socket(AF_INET, SOCK_STREAM, 0);

    if(ServerSocket < 0)
    {
        printf("Unable to create socket\n");
        return -1;
    }

    printf("Socket gets created successfully with fd : %d\n", ServerSocket);

    // Step 2 : Attach the socket to IP-address and port number 

    memset(&ServerAddr, 0, sizeof(ServerAddr));

    ServerAddr.sin_family = AF_INET;
    ServerAddr.sin_addr.s_addr = INADDR_ANY;
    ServerAddr.sin_port = htons(Port);

    iRet = bind(ServerSocket, (struct sockaddr*) &ServerAddr, sizeof(ServerAddr));

    if(iRet == -1)
    {
        printf("Bind system call failed\n");
        close(ServerSocket);
        return -1;
    }

    printf("Bind operation with socket is sucessfull\n");

    // Step 3 : Mark the socket as a active socket

    iRet = listen(ServerSocket, 11);      // listen(fd for socket, how many requests to handel at a time<any random number we have given 11>)

    if(iRet == -1)
    {
        printf("Unable to convert socket in listen mode\n");
        return -1;
    }

    printf("Server is live at port number : %d\n", Port);

    return 0;
}