#include<stdio.h>
int main(){

int a;
printf("Enter Your age :");
scanf("%d",&a);
if (a>=18)
{
    printf("You are %d So you can vote",a);
}
else{
    printf("You are %d So you 'CANNOT' vote",a);
}

    return 0;
}