#include<stdio.h>
int main(){

int i=1,sum=1,n;
printf("Enter Number Whos Factorial you want:");
scanf("%d",&n);

for (i;i<=n;i++){
    sum=sum * i;
    printf("\n%d",sum);
}
   return 0;

}