// Sum of all factors of a number.

#include<stdio.h>

int sum_of_factors(int number)
{
    int i = 0;
    int iSum = 0;

    if(number < 0)
    {
        number = -number;
    }
    

    for(i = 1; i <= number/2; i++)
    {
        if(number%i == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

int main()
{
    int number = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &number);

    iRet = sum_of_factors(number);

    printf("Sum of all factors is : %d\n",iRet);

    return 0;
}