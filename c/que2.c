// write program to find factorial of a no.
#include<stdio.h>
int main()
{
    int f=1,i,n;
    printf("enter the value\n");
    scanf("%d",&n);
    i=2;
   while(i<=n)
   {
    f*=i;
    i++;
   }
    printf("factorial of no. is %d",f);
    return 0;
}