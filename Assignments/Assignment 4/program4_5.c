// Write a program which accepts number from user and returns difference between its factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int fsum = 0;
    int nfsum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo%iCnt) != 0)
        {
            nfsum = nfsum + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            fsum = fsum + iCnt;
        }
    }

    return fsum-nfsum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);
    
    return 0;
}