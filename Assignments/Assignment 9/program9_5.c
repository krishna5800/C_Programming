// Write a program to find even factorial and odd factorial diference.

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

int EvenFact(int iNo)
{
    int i = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        if((i%2) == 0)
        {
            iFact = iFact * i;
        }
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet1 = 0;
    int iRet2 = 0;

    printf("Enter number :\n");
    scanf("%d", & iValue);

    iRet1 = OddFact(iValue); 
    iRet2 = EvenFact(iValue);



    printf("Even factorial is : %d", (iRet2-iRet1));
    
    return 0;
}