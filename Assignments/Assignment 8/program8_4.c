// Write a program which accepts number form user and prints its table.

#include<stdio.h>

void Table(int iNo)
{
    int i = 0;
    int iTable = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= 10; i++)
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