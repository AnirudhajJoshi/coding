#include<stdio.h>
#include<stdlib.h>
int main()
{
    int key,n,*a,i;
    printf("enter the size of array\n");
    scanf("%d",&n);
    a = (int *)malloc(n * sizeof(int));     //allocating memory blocks
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter key element to search\n");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(key==a[i]){
        printf("found at %d location\n",i+1);
        }
    }
    return 0;

}