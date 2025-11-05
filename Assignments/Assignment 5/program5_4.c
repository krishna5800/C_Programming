// Check Positive , Negative and Zero

#include<stdio.h>

void CheckNumType(int num)
{
    if(num > 0)
    {
        printf("It is Positive Number");
    }
    else if(num < 0)
    {
        printf("It is Negative Number");
    }
    else
    {
        printf("It is Zero");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Year :\n");
    scanf("%d", &iValue);

    CheckNumType(iValue);
    
    return 0;
}