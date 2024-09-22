#include<stdio.h>
int main(){
    int n;
printf("Enter max range of prime number:" );
scanf("%d",&n);
for (int i = 0; i <= n; i++)
{
    if (i%2!=0||i%3!=0)
    {
        printf("\n%d",i);
    }
    
}


    return 0;
}