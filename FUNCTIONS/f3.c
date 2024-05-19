//Without Argument - With Return type
#include<stdio.h>
int sum()
{
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
    
}
int main()
{
    int p;
    p = sum();
    printf("sum=%d",p);
    return 0;
}