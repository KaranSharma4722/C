#include<stdio.h>
int main(){
    int a,b,c;
printf("Enter first Number:");
scanf("%d",&a);
printf("Enter Second Number:");
scanf("%d",&b);
printf("Enter Third Number:");
scanf("%d",&c);

if (a>b && a>c)
{
    printf("%d is Gratest out of %d,%d.",a,b,c);
}
else if (b>a && b>c)
{
    printf("%d is Gratest out of %d,%d.",b,a,c);
}
else{
    printf("%d is Gratest out of %d,%d.",c,a,b);
}



return 0;
}