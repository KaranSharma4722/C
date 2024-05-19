//With Argument - Without Return type
#include<stdio.h>
void sum(int a, int b)
{
    
    
    int c=a+b;
    printf("sum=%d",c);
}
int main()
{
    int x,y;
    printf("Enter Two Numbers:");
    scanf("%d %d",&x,&y);
    sum(x,y);
    return 0;
}