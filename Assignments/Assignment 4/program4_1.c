// Write a program which accepts number from user and display its multiplication of factors

#include<stdio.h>

int MulFact(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;
    int iMul = 1;
    
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo%iCnt) == 0)
        {
            iMul = (iMul * iCnt);
        }
    }

    return iMul;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = MulFact(iValue);

    printf("%d\n", iRet);
    
    return 0;
}