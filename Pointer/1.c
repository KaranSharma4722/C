#include<stdio.h>
int main()
{
    int a=10,*b;
    b=&a;
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\n&a=%d",&a);
    printf("\n&b=%d",&b);
    printf("\n*b=%d",*b);

    return 0;
}
