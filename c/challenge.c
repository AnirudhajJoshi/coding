#include<stdio.h>
int main()
{
    int n,a,j;
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
n=dec;
for(j=1;n!=0;j++)
{
    if(n%2!=0)
 {
       n=n-1;
}
else
{
    n=n/2;
}
}
printf("number of iterations are %d\n",j-1);
    return 0;

}