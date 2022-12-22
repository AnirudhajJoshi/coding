#include <stdio.h>
void read(int a[], int n);
void display(int a[], int n);
int search(int a[], int n, int key);
int main()
{
    int a[10], n, key, flag;
    printf("Enter the value n\n");
    scanf("%d", &n);
    printf("Enter %d elements of array\n", n);
    read(a, n);

    printf("Entered elements are \n");
    display(a, n);

    printf("Enter the key elment to be searched\n");
    scanf("%d", &key);

    flag = search(a, n, key);
    if (flag == 1)
        printf("Successful search\n");
    else
        printf("Unsuccessful search\n");
}
void read(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void display(int a[], int n)
{

    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}
int search(int a[], int n, int key)
{
    int i;
    for (i = 0; i <=n; i++)
    {
        if (key == a[i])
    {
        printf("Found at %d location\n",i+1);
    
            return 1;
    }
    }
    return 0;
}