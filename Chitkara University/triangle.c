#include<stdio.h>
int main(){
double a,b,c,angle;
printf("Enter first angle:");
scanf("%lf",&a);
printf("Enter Second angle:");
scanf("%lf",&b);
printf("Enter Third angle:");
scanf("%lf",&c);
angle=a+b+c;
angle==360?printf("It's a Valid triangle"):printf("It's 'NOT' a Valid triangle");
return 0;
}