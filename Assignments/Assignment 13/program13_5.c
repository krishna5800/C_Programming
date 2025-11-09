// Find sum of first N even natural numbers.

#include<stdio.h>

int sum_natural_numbers(int number)
{
    int i = 0;
    int iSum = 0;

    if (number < 0)
    {
        printf("Invalid input !!\n");
        return 0;
    }
    
    for(i = 1; i <= number; i++)
    {
        if (i%2  == 0)
        {
            iSum = iSum + i;
        } 
    }

    return iSum;
}

int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d", &limit);

    iRet = sum_natural_numbers(limit);

    if(iRet != 0)
    {
        printf("Summation is : %d\n", iRet);
    } 

    return 0;
}