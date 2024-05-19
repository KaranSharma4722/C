#include<stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s1;
    printf("Enter record of student:");
    scanf("%d%s%f",&s1.rollno,&s1.name,&s1.marks);
    printf("\n Record of student s:\n");
    printf("%d\t%s\t%0.2f",s1.rollno,s1.name,s1.marks);

}