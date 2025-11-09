// Print all numbers from 1 to N

#include<stdio.h>

void print_numbers(int number)
{
    int i = 0;
    
    for(i = 1; i <= number; i++)
    {
        printf("%d  ", i);
    }
}

int main()
{
    int limit = 0;

    printf("Enter Number : \n");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}