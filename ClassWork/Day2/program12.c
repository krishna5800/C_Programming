/*
    START
        Accept number and store as No
        Divide No by 2
        If remiander is 0 
            then display as even 
        Otherwise 
            display as odd
    STOP
*/


#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("It is Even number\n");
    }
    else
    {
        printf("It is Odd number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}