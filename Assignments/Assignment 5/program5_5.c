// Find lager number among three numbers

#include<stdio.h>

void FindLargest(int x, int y, int z)
{
    if(x > y && x > z)
    {
        printf("%d is largest number", x);
    }
    else if(y > x && y > z)
    {
        printf("%d is largest number", y);
    }
    else
    {
        printf("%d is largest number", z);
    }
}

int main()
{
    int a = 0, b = 0, c = 0;

    printf("Enter three numbers :\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    finnLargest(a, b, c);
    
    return 0;
}