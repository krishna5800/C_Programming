#include<stdio.h>

void CountSpace(char str[])           
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))        // ASCII OF (SPACE) ' '  = 32
        {            
            iCount++;
        }

        str++;
    }

    printf("Number of digits : %d\n", iCount);
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    CountSpace(Arr);  

    return 0;
}