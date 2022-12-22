#include<stdio.h>
void read(int *a, int n);
void display(int *a, int n);
int main()
{
    int n,a[10];
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array element\n");
    read(a,n);
    printf("Entered  array element are\n");
    display(a,n);
    return 0;
}

void read(int *a, int n){
    int i;
    for(i=0;i<n;i++)
    scanf("%d",a+i);
}
void display(int *a, int n){
    int i;
    for(i=0;i<n;i++)
    printf("%d\n",*(a+i));
}
