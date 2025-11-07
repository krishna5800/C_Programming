// Write a program to accept number form user and diaplay numbers up to that number.

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Please enter total marks : \n");
    scanf("%d", &iValue1);

    Display(iValue1);

    return 0;
}