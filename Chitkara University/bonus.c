#include<stdio.h>
double main (){

double salary,sales,netSalery;
printf("Enter Basic Salary:");
scanf("%lf",&salary);
printf("Enter Sales in appraisal period:");
scanf("%lf",&sales);

if (salary>8000&&sales>=500)
{
   printf("You Got 20 percent BONUS Which equals to:%.2lf",salary*.20); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.20);
}
else if (salary>8000&&sales<500)
{
    printf("You Got NO BONUS..."); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary);
}
else if ((salary<8000&&salary>=6000)&&sales>=200)
{
   printf("You Got 15 percent BONUS Which equals to:%.2lf",salary*.15); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.15);
}
else if ((salary<8000&&salary>=6000)&&sales<200)
{
   printf("You Got 5 percent BONUS Which equals to:%.2lf",salary*.5); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.5);
}
else if ((salary<6000&&salary>=4000)&&sales>=100)
{
   printf("You Got 10 percent BONUS Which equals to:%.2lf",salary*.10); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.10);
}
else if ((salary<6000&&salary>=4000)&&sales<100)
{
   printf("You Got 5 percent BONUS Which equals to:%.2lf",salary*.5); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.5);
}
else if (salary<4000&&sales>=50)
{
   printf("You Got 5 percent BONUS Which equals to:%.2lf",salary*.5); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+salary*.5);
}
else if (salary<4000&&sales<50)
{
   printf("You Got Rs 300 as BONUS "); 
   printf("\n\n\t\tNet Salary:'%.2lf",salary+300);
}
else{
    printf("'Invelit Entries'");
}
    return 0;
}