// Write a program to accept N from user and print first 5 multiples of N.

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= 5; i++)
    {
        printf("%d\t", iNo * i);
    }
}

int main()
{
    int iValue = 0;

    printf("Please enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
