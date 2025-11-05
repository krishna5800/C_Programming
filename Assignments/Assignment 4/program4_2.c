// Write a program which accepts number from user and display its factors in decresing order

#include<stdio.h>

void FactRev(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = iNo/2; iCnt > 0; iCnt--)
    {
        if((iNo%iCnt) == 0)
        {
            printf("%d  ", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    FactRev(iValue);
    
    return 0;
}