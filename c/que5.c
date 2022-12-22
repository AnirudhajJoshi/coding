//program to compute fibonacci series till given range
#include<stdio.h>
int main()
{
    int n,i,f1=0,f2=1,next=f1+f2;
    printf("Enter the range\n");
    scanf("%d",&n);
    printf("Fibonacci series is %d %d ",f1,f2);
    for(i=3;i<=n;i++){
        printf("%d ",next);
        f1=f2;
        f2=next;
        next=f1+f2;
    }
    return 0;
}