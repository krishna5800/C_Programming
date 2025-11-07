// Write a program to accept N from user and print all odd numbers up to N.

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
        if((i%2) != 0)
        {
            printf("%d\t", i);
        }
        
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
