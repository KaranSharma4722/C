#include<stdio.h>
int main()
{
    int n;
    

    do{
        printf("Enter any number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if (n%2!=0)
        {
        break;
        }



    }while(1);
    return 0;
}
