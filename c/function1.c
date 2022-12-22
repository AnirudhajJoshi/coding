#include<stdio.h>
int sum(int a, int b);
int main()
{
    int c;
    c = sum(10, 90);
    printf("The sum of c is %d",c);

    return 0;
}

int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}