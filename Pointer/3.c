#include<stdio.h>
int main()
{
    int *ar[3],i,a =10,b =20,c =30;
    ar[0]= &a;
    ar[1]= &b;
    ar[2]= &c;
    printf("\narray is :");
    for(i=0;i<3;i++)
    {
        printf("\n%d",*ar[i]);
    }

    return 0;
}
