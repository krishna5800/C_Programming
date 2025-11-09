// Accept amount in US dollar and return its corresponding value in INR.
// consider 1$ = 70RS

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iDollar = 0;
    iDollar = 70 * iNo;

    return iDollar;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter amount in USD :\n");
    scanf("%d", & iValue);

    iRet = DollarToInr(iValue); 

    printf("Value in INR is : %d", iRet);

    return 0;
}