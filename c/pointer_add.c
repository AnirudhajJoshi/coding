#include<stdio.h>
int main()
{
    int i;
    int *p=&i;
    printf("The value of i is: %u\n",p);
    p++;
    printf("The new value of i is: %u\n",p);
    return 0;
}