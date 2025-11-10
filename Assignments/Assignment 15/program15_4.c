// Write a program which accepts number from user and return multiplication od all digits.

#include <stdio.h>

int MultiDigits(int iNo)
{
    int iDigit = 0;
    int i = 0;
    int iCount = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo%10;
        iNo = iNo/10;

        iCount = iCount*iDigit;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iRet = MultiDigits(iValue);

    printf("%d", iRet);

    return 0;
}