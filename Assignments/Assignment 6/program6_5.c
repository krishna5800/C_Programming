// Write a program which accept total marks and obtained marks from user and calculate percentage 

#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    float fPercent = 0.0f;

    if(iNo2 > iNo1)
    {
        printf("Invalid Input !!");
        return -1;
    }

    fPercent = (iNo2 * 100) / iNo1;

    return fPercent;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : \n");
    scanf("%d", &iValue1);
    printf("Please enter marks obtained : \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Percentage is : %f", fRet);
    
    return 0;
}