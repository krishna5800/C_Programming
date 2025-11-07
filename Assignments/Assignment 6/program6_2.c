// Write a program which accept one number from user and check wherather that number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo>100)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue= 0;
    bool bRet = false;

    printf("Please enter number : \n");
    scanf("%d", &iValue);

    bRet = ChkGreater(iValue);
    
    if(bRet == true)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    return 0;
}