#include<stdio.h>
void gread(){       //Function start...
int a ;
printf("Enter your Marks out of 100:");
scanf("%d",&a);

if (a>=80){
    printf("\nYour Gread: A+ ");
}
else if (a<80 && a>=60)
{
    printf("\nYour Gread: A ");
}
else if (a<60 && a>=40)
{
    printf("\nYour Gread: B ");
}
else{
    printf("\nYour Gread: F ");
}}                //Function end...
void gread();
int main(){
    gread();
    return 0;

}
