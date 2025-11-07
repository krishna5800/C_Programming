// Write a program which accept three numbers and print its multiplication

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMul = 0;
    iMul = iNo1*iNo2*iNo3;
    return iMul;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Please enter 1st number : \n");
    scanf("%d", &iValue1);
    printf("Please enter 2nd number : \n");
    scanf("%d", &iValue2);
    printf("Please enter 3rd number : \n");
    scanf("%d", &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplicatin is : %d", iRet);
    
    return 0;
}