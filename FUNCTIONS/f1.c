//Without Argument - Without Return type
#include<stdio.h>
void sum()
{
    int a,b,c;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum=%d",c);
}
int main()
{
    sum();
    return 0;
}