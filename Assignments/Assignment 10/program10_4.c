// Write a program which accepts temperature in Fahrenheit and converts it to Celsius
// Formula: Celsius = (Fahrenheit - 32) * 5 / 9

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCel = 0.0;

    dCel = (fTemp - 32.0) * (5.0 / 9.0);

    return dCel;
}

int main()
{
    float fValue1 = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f", &fValue1);

    dRet = FhtoCs(fValue1);

    printf("Temperature in Celsius is: %.2lf\n", dRet);

    return 0;
}
