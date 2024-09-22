//it will return the x raise to the power of y..
#include<stdio.h>
#include<math.h>
int main(){
    double x,y;
    printf("Enter one number:");
    scanf("%lf",&x);
    printf("Enter its power:");
    scanf("%lf",&y);
    printf("%.1lf raised to the power of %.1lf = %.1lf",x,y,pow(x,y));
    return 0;
}
