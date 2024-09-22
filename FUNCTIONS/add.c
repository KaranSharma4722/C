#include<stdio.h>
int sum(int x,int y){
    return x+y;
}

int main(){
int a,b,c;
printf("Enter first Number:");
scanf("%d",&a);
printf("Enter second Number:");
scanf("%d",&b);
c = sum(a,b);
printf("%d",c);

    return 0;
}