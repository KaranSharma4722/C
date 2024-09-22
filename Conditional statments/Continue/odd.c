#include<stdio.h>
int main(){
    int i=5;
    do{
        if (i%2!=0)
        {
         printf("\n%d",i);   
        }
        
        i++;
    }while(i<=50);
    return 0;
} 