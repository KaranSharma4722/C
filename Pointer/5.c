#include<stdio.h>
int main()
{
    int a,b,*c,*d,e;
    char ch;  
      c=&a;
      d=&b;
   
    printf("\n*c=%d",*c);
    printf("\n*d=%d",*d);

    printf("\nEnter any Artimaric Operator:");
    scanf("%c",&ch);
   
    switch (ch)
    {
    case '+':e=*c + *d;
        printf("sum = %d",e);
        break;

    case '-':e=*c - *d;
        printf("sub = %d",e);
        break;

    case '*':e=*c * *d;
        printf("mul = %d",e);
        break;

    case '/':e=*c / *d;
        printf("Div = %d",e);
        break;

    case '%':e=*c % *d;
        printf("Mod = %d",e);
        break;
    
    default:
    printf("You entered wrond Value");
        break;
    }
    

    return 0;
}
