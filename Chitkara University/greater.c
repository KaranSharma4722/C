#include<stdio.h>
int main(){

int a,b;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the Second number :");
scanf("%d",&b);
if (a>b)
{
    printf("%d is Grater Then %d",a,b);
}
else{
    printf("%d is Grater Then %d",b,a);
}

    return 0;
}