// Write a program to accept number form user and print its number line.

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = -iNo; i <= iNo; i++)
    {
        printf("%d\t", i);
    }
}

int main()
{
    int iValue1 = 0;

    printf("Please enter number : \n");
    scanf("%d", &iValue1);

    Display(iValue1);

    return 0;
}
