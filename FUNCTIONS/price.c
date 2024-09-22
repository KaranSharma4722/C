#include<stdio.h>
double calculatePrice(float n){
    n = n+(n*0.18);
    printf("Final Price = %lf",n);
}
double main(){

double a;
printf("Enter Price of Product:");
scanf("%lf",&a);
calculatePrice(a);

    return 0;
}