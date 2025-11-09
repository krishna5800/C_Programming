// Write a program which accepts number from user and display its table in reverse order.

#include<stdio.h>

void Table(int iNo)
{
    int i = 0;
    int iTable = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i > 0; i--)
    {
        iTable = i * iNo;
        printf("%d  ", iTable);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}