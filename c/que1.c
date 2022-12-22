//write a program to print all the no. between given range which are divisible by 5 using all loop 
#include<stdio.h>
int main()
{
    int n,m,i;
    printf("enter the start range\n");
    scanf("%d",&m);
    printf("enter the end range\n");
    scanf("%d",&n);
    i=m;
    for(i=0;i<=n;i++)
    {
        if(i%5==0)
        printf(" %d ",i);
        
    }
    return 0;
}