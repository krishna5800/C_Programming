// Write a program to display factorial of a number.

#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factprial is : %d\n", iRet);

    return 0;
}