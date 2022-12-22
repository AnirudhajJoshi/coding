#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter the temperature in celcius\n");
    scanf("%f",&c);

    f = (c * 1.8) + 32;

    printf("The temperature in Fahrenheit is --->  %.2lf\n",f);

    return 0;
}