#include<stdio.h>
struct student
{
    int rno;
    char name[10];
    float cgpa;
}s[10];

void read(struct student s[10], int n){
    int i;
    for(i=0;i<n;i++){
    printf("Enter the student %d details\n",i+1);
    printf("Enter the roll number of student %d\n",i+1);
    scanf("%d",&s[i].rno);
    printf("Enter the name of  student %d\n",i+1);
    scanf("%s",s[i].name);
    printf("Enter the CGPA of student %d\n",i+1);
    scanf("%f",&s[i].cgpa);
    }
}

void display(struct student s[10], int n){
    int i;
    for(i=0;i<n;i++){
        printf("\n\nDetails of %d sudent\n",i+1);
        printf("Roll no. = %d\nName = %s\nCGPa = %f\n",s[i].rno,s[i].name,s[i].cgpa);
    }
}

int main()
{
    struct student s[10];
    int n;
    printf("Enter the number of students\n");
    scanf("%d",&n);

    read(s,n);
    display(s,n);
    return 0;
}