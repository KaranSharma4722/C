//With Argument - With Return type
#include<stdio.h>
int sum(int a, int b)
{
    int c = a+b;
    return c;
}
int main()
{
    int x,y,z;
    printf("Enter Two Numbers:");
    scanf("%d %d",&x,&y);
    z = sum (x,y);
    printf("sum=%d",z);
    return 0;
}