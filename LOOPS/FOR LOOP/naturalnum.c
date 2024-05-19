#include<stdio.h>
int main()
{
    int mul,n,i=0;
    printf(" enter any number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
   
       mul = i*n;
       printf("\n%d",mul);
    }

    return 0;
}
