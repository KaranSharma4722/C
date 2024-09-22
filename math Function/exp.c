//it will return the e raise to the power of x..
#include<stdio.h>
#include<math.h>
int main(){
    double y;

    printf("Enter its power of e:");
    scanf("%lf",&y);

    printf("e raised to the power of %.1lf = %.1lf",y,exp(y));
    return 0;
}
