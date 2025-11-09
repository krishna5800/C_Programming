// Write a program which accepts range from user and display all numbers in b/w taht rangr.

#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    int i = 0;
    
    for(i = iNo1; i <= iNo2; i++)
    {
        printf("%d  ", i);
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter 1st number :\n");
    scanf("%d", &iValue1);

    printf("Enter 2nd number :\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}