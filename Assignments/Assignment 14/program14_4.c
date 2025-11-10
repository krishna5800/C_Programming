// Write a prgram which takes input from user and count frequency of 4 in it.

#include <stdio.h>

int ChkZero(int iNo)
{
    int iDigit = 0;
    int i = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;

        if(iDigit == 4)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = ChkZero(iValue);

    printf("Frequency of 4 in %d is : %d\n", iValue, iRet);

    return 0;
}