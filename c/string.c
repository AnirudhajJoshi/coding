#include<stdio.h>
int len(char []);
int main()
{
    char s[10];;
    int l,i;
    printf("Enter the string\n");

    for(i=0;(s[i]=getchar())!='\n';i++)
    ;
    s[i]='\n';

    printf("Entered string is\n");
    for(i=0;s[i]!='\0';i++)
    putchar(s[i]);

    l= len(s);
    printf("Length of the string %s is %d\n",s,l);
    return 0;
}
int len(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++)
    ;
    return i;
}