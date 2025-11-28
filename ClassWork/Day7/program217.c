#include<stdio.h>

int strlenX(char str[])     // replacement for strlen()
{
    int iCount = 0;
    while(*str != '\0')
    {
        str++;
        iCount++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = strlenX(Arr);

    printf("String length is : %d\n", iRet);

    return 0;
}