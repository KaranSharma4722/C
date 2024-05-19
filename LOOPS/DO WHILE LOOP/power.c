#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter a number:\n");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i +1);
        i = i * 2;
    } while (i < n);
    
     return 0;
}
