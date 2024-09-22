#include<stdio.h>
int main()
{
int a,b,sum,mul,div,sub,mod;
printf("Enter First Number:");
scanf("%d",&a);
printf("Enter Second Number:");
scanf("%d",&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("SUM =%d\n",sum);
printf("SUB =%d\n",sub);
printf("MUL =%d\n",mul);
printf("DIV =%d\n",div);
printf("MOD =%d\n",mod);
return 0;
}
