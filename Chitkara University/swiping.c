#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter any two Numbers for swaping\n");
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Second Number:");
    scanf("%d",&b);
    printf("Before Swaping:\tFirst No=%d\t Second No=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter Swaping:\tFirst No=%d\t Second No=%d",a,b);
    return 0;

}