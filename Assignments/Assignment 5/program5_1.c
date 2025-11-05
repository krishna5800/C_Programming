// Check Even or Odd

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    if((iNo%2)== 0)
    {
        printf("It is Even number");
    }
    else
    {
        printf("It is Odd number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);
    
    return 0;
}