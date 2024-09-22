#include<stdio.h>
int main(){
    int n;
    printf("Enter Number Whos Reverce Table you want:");
    scanf("%d",&n);
    for (int i = 10; i >= 1; i--)
    {
       printf("\n%d X %d = %d",n,i,n*i); 
    }
    
    return 0;
}