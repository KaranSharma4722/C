#include<stdio.h>
int main ()
{
    int l,b,h,volume;
    printf("Enter  Length:");
    scanf("%d",&l);
    printf("\nEnter  Breath:");
    scanf("%d",&b);
    printf("\nEnter  Hight:");
    scanf("%d",&h);
    volume=l*b*h;
    printf("volume of cube is:%d",volume);
return 0;
}