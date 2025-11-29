#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';                   // CONFUSED HERE 
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);            // Imp

    strcpyX(Arr, Brr);

    printf("Coppied String is : %s\n", Brr);

    return 0;
}