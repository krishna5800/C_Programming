// Find Maximum of two numbers

#include<stdio.h>

void FindMax(int a, int b)
{
    if(a > b)
    {
        printf("Num1 is greater than Num2");
    }
    else if(b > a)
    {
        printf("Num2 is greater than Num1");
    }
    else
    {
        printf("Num1 is equal to Num2");
    }
}

int main()
{
    int iNum1 = 0;
    int iNum2 = 0;

    printf("Enter Num1 :\n");
    scanf("%d", &iNum1);

    printf("Enter Num2 :\n");
    scanf("%d", &iNum2);

    FindMax(iNum1,iNum2);
    
    return 0;
}