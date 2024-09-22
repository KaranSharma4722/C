#include<stdio.h>
int main(){
    int i,n,avg,sum;
printf("Enter the number of persons:");
scanf("%d",&n);
for ( i = 1; i <=n; i++)
{
    printf("Enter value of %d person:",i);
    scanf("%d",&avg);
    sum=sum+avg;
}
printf("Average is : %d",sum/n);

    return 0;
}