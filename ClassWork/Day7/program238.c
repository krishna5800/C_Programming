#include<stdio.h>

void strluprX(char str[])           
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {            
            *str = (*str - 32);
        }

        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    int iCnt = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    strluprX(Arr);  

    printf("Updated string is : %s\n", Arr);

    return 0;
}