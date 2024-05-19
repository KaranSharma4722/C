#include<stdio.h>
int main()
{
int Day;
printf("enter any number from 1 to 7:");
scanf("%d",& Day);
if (Day==1)
{
    printf("Its Monday");
}
else if(Day==2)
{
    printf("Its Tusday");
}
else if(Day==3)
{
    printf("Its Wednesday");
}
else if(Day==4)
{
    printf("Its Thrusday");
}
else if(Day==5)
{
    printf("Its Friday");
}
else if(Day==6)
{
    printf("Its Saturday");
}
else if(Day==7)
{
    printf("Its Sunday");
}
else 
{
    printf("invalid number");
}
return 0;
}