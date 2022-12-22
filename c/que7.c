// program to convert given binary no. into decimal
#include<stdio.h>
int main()
{
    int n;
    printf("Enter any binary number\n");
    scanf("%d",&n);
    int dec=0,base=1;
    while(n!=0){
        int rem = n%10;
        dec = dec +rem*base;
        base*=2;
        n/=10;
    }
    printf("the decimal value is %d\n",dec);
    return 0;
}