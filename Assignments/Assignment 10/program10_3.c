// Write a program which accepts distance in Km and convert it to meter.
#include<stdio.h>

int KmToMeter(int iNo)
{ 
    int iMeter = 0;

    iMeter = 1000*iNo;

    return iMeter;
}

int main()
{
    int iValue1 = 0;
    int iRet = 0;

    printf("Enter KM :\n");
    scanf("%d", &iValue1);

    iRet = KmToMeter(iValue1);

    printf("Km to Meter is : %d", iRet);

    return 0;
}