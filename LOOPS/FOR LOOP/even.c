#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter any Number:");
    scanf("%d",&n);
for(i = 1; i <= n; i++)
{
    sum=sum+i;
printf("\n%d",i);
}
printf("\nsum of first %d natural number=%d",i,sum);
if(sum%2==0){
printf("\nNumber is a even");
}
else{
    printf("\nNumber is a odd");
}
    return 0;
}