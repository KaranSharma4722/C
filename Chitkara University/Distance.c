#include<stdio.h>
#include<math.h>
int main(){

    double u,t,a,distance;

    printf("Enter the Velocity (U):");
    scanf("%lf", &u);
    printf("Enter the Time (T):");
    scanf("%lf", &t);
    printf("Enter the Accelaeration (A):");
    scanf("%lf" ,&a);
    distance= (u*t)*(a*pow(t,2))/2;
    printf("Distance = %.1lf",distance);
    return 0;
}