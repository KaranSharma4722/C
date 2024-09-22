#include<stdio.h>
#include<math.h>
int main(){
    double r,n,mango;
    printf("Enter the price Dozon of Mangos:");
    scanf("%lf",&r);
    
    printf("Enter Number of Mangos You have:");
    scanf("%lf",&n);
    mango=(r/12)*n;
    printf("Total Price : %.1lf",mango);

    return 0;
}
