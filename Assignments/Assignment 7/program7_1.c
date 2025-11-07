// Write a program which accepts number from user and prints that number of $ and * on screen. 

#include<stdio.h>

void Pattern(int iNo)
{   
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 0; i < iNo; i++)
    {
        printf("$   *   ");
    }

}

int main()
{
    int iValue1 = 0;

    printf("Please enter total marks : \n");
    scanf("%d", &iValue1);

    Pattern(iValue1);

    return 0;
}