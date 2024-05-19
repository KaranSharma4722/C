#include<stdio.h>
int main ()
{
    float h,m,s,e,p,total,avg,per;
    printf("Enter Subject marks:");
    scanf("%f",&h);
    scanf("%f",&m);
    scanf("%f",&s);
    scanf("%f",&e);
    scanf("%f",&p);
    total=h+m+s+e+p;
    printf("\ntotal marks are:%f",total);
    avg=total/5;
    printf("\nAverage marks are:%f",avg);
    per=(total/500)*100;
     printf("\nPersentage:%f",per);
return 0;
}