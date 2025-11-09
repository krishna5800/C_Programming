// Write a program which accepts range from user and display sum of all even numbers in b/w that range.

#include<stdio.h>

int RangeDisplay(int iNo1, int iNo2)
{
    int i = 0;
    int iSum = 0;
    
    if(iNo1 > iNo2)
    {
        printf("Invalid Input !!\n");
        return 0;
    }

    if(iNo1 < 0 || iNo2 < 0)
    {
        printf("Invalid Input !!\n");
        return 0;
    }

    for(i = iNo1; i <= iNo2; i++)
    {
        if(i%2 == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter 1st number :\n");
    scanf("%d", &iValue1);

    printf("Enter 2nd number :\n");
    scanf("%d", &iValue2);

    iRet = RangeDisplay(iValue1, iValue2);

    if(iRet != 0)
    {
        printf("Summation is : %d\n", iRet);
    }

    return 0;
}
