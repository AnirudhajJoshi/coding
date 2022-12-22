#include<stdio.h>
float f(float m);
int main()
{
   float m;
   printf("Enter the value of mass in KGs\n");
   scanf("%f",&m);

   printf("The value of mass in Newton is %.2lf",f(m));
}
float f(float m)
{
    float r;
    r = 9.81 * m;
    return r;
}