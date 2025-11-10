// Write a prgram which takes input from user and check if it has zero in it or not.

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;

        if(iDigit == 0)
        {
            return TRUE;
        }
    }
    
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("It do not contains zero\n");
    }

    return 0;
}