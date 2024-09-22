#include<stdio.h>
int main(){

int a;
printf("Enter the Year you want to check is Leap or not :");
scanf("%d",&a);
if (a%4==0)
{
    printf("%d is a Leap Year",a);
   
}
else{
    printf("%d is NOT a Leap Year",a);
}

    return 0;
}