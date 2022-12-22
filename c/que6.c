// program to find sum of digits in a no.
#include<stdio.h>
int main()
{
    int s,n;
    printf("enter  numbers\n");
    scanf("%d",&n);

while(n>0){
    s%=10;
    s=n/10;
    s=s+n;

    printf("the sum of digits is %d\n",s);
}  
    return 0;
}