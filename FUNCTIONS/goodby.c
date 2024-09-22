#include<stdio.h>
void Print(){
    printf("\nGood-Bye");
}
void Print2(){
    printf("\nHello");
}
void Print();
void Print2();
int main(){
    Print();
    Print2();
return 0;
}