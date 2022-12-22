#include<stdio.h>
int add();
int main()
{
    add();
    return 0;
}

int add()
{
    int a, b,s;
    printf("Enter two values\n");
    scanf("%d%d",&a,&b);

    s=a+b;
     printf("sum is %d",s);
    return s;
}
    