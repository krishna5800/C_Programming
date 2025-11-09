// Write a program which accepts radius of circle from user and calculate its area. Consider value of PI = 3.14

#include<stdio.h>

double CircleArea(float Radius)
{ 
    float Pi = 0;
    double Area = 0;
    Pi = 3.14f;

    Area = Pi * Radius * Radius;

    return Area;
}

int main()
{
    float fValue = 0;
    double dRet = 0;

    printf("Enter Radius :\n");
    scanf("%f", & fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle : %lf", dRet);

    return 0;
}