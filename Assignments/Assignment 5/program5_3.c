// Check Leap Year

#include<stdio.h>

void CheckLeapYear(int Year)
{
    if((Year%4) == 0)
    {
        printf("It is leap year");
    }
    else
    {
        printf("It is not leap year");
    }
}

int main()
{
    int yr = 0;

    printf("Enter Year :\n");
    scanf("%d", &yr);

    CheckLeapYear(yr);
    
    return 0;
}