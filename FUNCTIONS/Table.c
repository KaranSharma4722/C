#include<stdio.h.>
int table(int n){
    int i=1;
    printf("Enter the Number who's table you want:");
    scanf("%d",&n);
    for ( i ; i <= 10; i++)
    {
        printf("\n%d X %d = %d",n,i,n*i);
    }
    
}

int main(){
    int a;
    table(a);
    return 0;
}