#include<stdio.h>
int main()
{
double n;
printf("enter a Number:");
scanf("%lf",&n);
if (n>0)
{
    printf("\n%0.1lf is Positive",n);
}
else 
{
    printf("\n%0.1lf is negetive ",n);
}
return 0;
}