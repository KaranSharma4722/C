#include<stdio.h>
int main(){
    int a,b,add,mul,sub,div,mod;
printf("Enter Any two Numbers\n");
printf("Enter First Number:");
scanf("%d",&a);
printf("Enter Second Number:"); 
scanf("%d",&b);
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;

printf("\nAdd:%d",add);
printf("\nSub:%d",sub);
printf("\nMul:%d",mul);
printf("\nDiv:%d",div);
printf("\nMod:%d",mod);
return 0;
}