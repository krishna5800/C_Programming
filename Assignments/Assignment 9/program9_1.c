// Accept number from user and display below pattern.

// input - 5
// output - *   *   *   *   *   #   #   #   #   # 

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= (2*iNo); i++)
    {
        if(i <= iNo)
        {
            printf("*   ");
        }
        else
        {
            printf("#   ");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", & iValue);

    Display(iValue); 

    return 0;
}