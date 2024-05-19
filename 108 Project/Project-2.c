#include<stdio.h>
int main()
{
float a,b,c,d;
char km,m,cm,mm,mile,y,f,i,nm;

printf("MUST USE :-\nKilometer      : km,\nmeter          : m,\ncentimeter     : cm,\nmilemeter      : mm,\nmile           : mile,\nyard           : y,\nfoot           : f,\ninch           : i,\nnatutical mile : nm,\n");
printf("\nEnter the metric unit of measurement you have: ");
scanf("%c",&a);
printf("Enter its Value:");
scanf("%f",&c);
printf("\nMetric unit of measurement you want to convert in: ");
scanf("%c",&b);
if (a==km && b==m)
{
 printf("\n%lf",d = c *1000);   
}

return 0;
}