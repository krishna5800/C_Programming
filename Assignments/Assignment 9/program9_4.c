// Write a program to find odd factorial of number.

#include<stdio.h>

int OddFact(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i%2) != 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", & iValue);

    iRet = OddFact(iValue); 

    printf("Even factorial is : %d", iRet);
    return 0;
}