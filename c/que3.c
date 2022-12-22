// write the program to print sequence of numbers without using loop or using recursion
#include<stdio.h>
void printnos(int n){
    if(n>0)
    {
        printf("%d ",n);
        printnos(n - 1);
    }
}
int main()
{
    printnos(5);
    return 0;
}