#include<stdio.h>

int main()
{
    char Name[50] = {'\0'};

    printf("Enter your name : \n");
    scanf("%[^'\n']s", Name);               //New   

    printf("Hello : %s\n", Name);
    
    return 0;
}