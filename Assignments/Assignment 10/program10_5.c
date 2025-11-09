// Write a program which area in squar feet and convert it into squar meter.
// (1 squar feet = 0.0929 sq. meter)

#include<stdio.h>

double SquareMeter(float fNo)
{ 
    double fMeter = 0;

    fMeter = fNo * 0.0929;

    return fMeter;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0f;

    printf("Enter in Squar Feet :\n");
    scanf("%f", &fValue1);

    dRet = SquareMeter(fValue1);

    printf("Squar Meter is : %lf", dRet);

    return 0;
}