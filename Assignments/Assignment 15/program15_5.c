// Write a program which accepts number from user and return difference between sum of even and odd digits.

#include <stdio.h>

int SumEven(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSum;
}

int SumOdd(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iSum = iSum + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iDiff = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iEvenSum = SumEven(iValue);
    iOddSum = SumOdd(iValue);

    iDiff = iEvenSum - iOddSum;

    printf("Difference between sum of even and odd digits is : %d\n", iDiff);

    return 0;
}
