#include<stdio.h>
int main()
{
    int j,i,n;
    printf("Enter the number who's table you want:");
    scanf("%f",&n);

    for (size_t j = 0; j < 10; j++)
     {
        printf("%dX%d=",n,j);
    }
    
    for (size_t i = 0; i <= j*10; i = i+n)
    {
        printf("%d",i);
    }
    
    
    return 0;
}
