#include<stdio.h>
int main()
{
float Economics,Accounts,Business,Maths,English,total,Avg;
printf("Enter Economics Marks:");
scanf("%f",& Economics);
printf("Enter Accounts Marks:");
scanf("%f",& Accounts);
printf("Enter Business Marks:");
scanf("%f",& Business);
printf("Enter Maths Marks:");
scanf("%f",& Maths);
printf("Enter English Marks:");
scanf("%f", & English);
total = Economics+Accounts+Business+Maths+English;
printf("Total Marks=%0.2f\n",total);
Avg=total/5;
printf("Percenrage=%0.2f\n",Avg);

if (Avg>=80)
{
    printf("Gread:'A'");
}
else if(Avg>=50)
{
    printf("Gread:'B'");
}
else if(Avg>=33)
{
    printf("Gread:'c'");
}
else if(Avg>=0)
{
    printf("'Fail'");
}
else 
{
    printf("invalid Marks");
}
return 0;
}