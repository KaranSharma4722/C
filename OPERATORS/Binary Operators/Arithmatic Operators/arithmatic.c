#include<stdio.h>
int main()
{
int a,b,sum,mul,div,sub,mod;
printf("Enter any 2 Numbers:\n");
scanf("%d\n%d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("%d\n",sum);
printf("%d\n",sub);
printf("%d\n",mul);
printf("%d\n",div);
printf("%d\n",mod);
return 0;
}
