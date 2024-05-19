#include <stdio.h>
int main()
{
    int n=1, i ;
    printf("Enter any number:");
    scanf("%d",&i);

    do
    {
        printf("%d\n", i - 1);
        i--;
    } while (i > n);
    
     return 0;
}
