#include<stdio.h>
int fact(int n);
int main()
{
    int n,r;
    printf("Enter value of n and r\n");
    scanf("%d%d",&n,&r);

    printf("npr is %d\n",fact(n)/fact(n-r));
    printf("ncr is %d",fact(n)/(fact(n-r) * fact(r)));
    return 0;

}
    int fact(int n)
    {
        int i,fact=1;
        for(i=2;i<=n;i++){
            fact*=i;
        }
        return fact;
    }