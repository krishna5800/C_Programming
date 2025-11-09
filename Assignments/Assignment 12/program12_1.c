// Print all factors of number

#include<stdio.h>

void print_factors(int number)
{
    int i = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(i = 1; i <= number/2; i++)
    {
        if(number%i == 0)
        {
            printf("%d  ", i);
        }
    }
}

int main()
{
    int number = 0;

    printf("Enter Number : \n");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}