#include<stdio.h>
int main()
{
int n,i=2,p=0;
printf("Enter any number:");
scanf("%d",&n);
do
{
    if(n%i==0)
    {
        break;
    }
    i++;
} while (i<n/2);
if(p==1&&n>1)
{
    printf("%d is a Prime Number",n);
}    
else
{
    printf("%d is not a Prime Number",n);
}
    return 0;
}
