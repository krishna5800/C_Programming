// Accept one character from user and convert case of that character

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c", cValue+32);
    }
    else if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c", cValue-32);
    }
    else
    {
        printf("Invalid input");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter Character :\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}