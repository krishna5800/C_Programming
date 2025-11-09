// Write a program which accepts height and width from user and give its area.
#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{ 
    double dArea = fWidth*fHeight;
    
    return dArea;
}

int main()
{
    float fValue1 = 0;
    float fValue2 = 0;
    double dRet = 0;

    printf("Enter Width :\n");
    scanf("%f", & fValue1);

    printf("Enter Height :\n");
    scanf("%f", & fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of Rectangle is : %lf", dRet);

    return 0;
}