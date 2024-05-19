#include<stdio.h>

union student
{
    int rollno;
    char name[20];
    float marks;
}ob;
int main()
{
    printf("Enter Roll no:");
    scanf("%d",&ob.rollno);
    printf("\nrollno=%d\n",ob.rollno);

    printf("Enter Name:");
    scanf("%s",&ob.name);
    printf("\nName=%s\n",ob.name);

    printf("Enter Marks:");
    scanf("%f",&ob.marks);
    printf("\nMarks=%0.2f\n",ob.marks);
}