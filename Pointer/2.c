#include<stdio.h>
int main()
{
    int a=10,*b,**c;
    b=&a;
    c=&b;
    printf("\na=%d",a);
    printf("\nb=%d",b);
    printf("\n&a=%d",&a);
    printf("\n&b=%d",&b);
    printf("\n*b=%d",*b);
    printf("\n&c=%d",&c);
    printf("\nc=%d",c);
    printf("\n*c=%d",*c);
    printf("\n**c=%d",**c);

    return 0;
}
