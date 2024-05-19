#include<stdio.h>
int main ()
{
   int a,b,c;
   printf("enter any two nunmbers:");
   scanf("%d",&a);
   scanf("%d",&b);
   printf("Orignal value of a=%d,b=%d",a,b);
   c=a;
   a=b;
   b=c;
   printf("\nafter swapping value of a=%d",a);
   printf("\nafter swapping value of b=%d",b); 
return 0;
}