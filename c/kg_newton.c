#include<stdio.h>
int main()
{
    float kg,n;
    printf("enter the value of force in KG\n");
    scanf("%f",kg);

    n = kg * (9.81);

    printf("Force in Newton is --> %f\n",n);
   
    return 0;

}