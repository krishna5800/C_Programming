// Print all odd numbers from 1 to N

#include<stdio.h>

void print_odd_numbers(int number)
{
    int i = 0;
    
    for(i = 1; i <= number; i++)
    {
        if(i% 2 != 0)
        {
            printf("%d  ", i);
        }
    }
}

int main()
{
    int limit = 0;

    printf("Enter Number : \n");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}