#include<stdio.h>
void pos(int *a,int n){
    int i,n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    if((*a)>0)
    printf("%d",a[i]);
}
}
int main()
{
    int a[10],n;
    pos(a,n);
    return 0;

}