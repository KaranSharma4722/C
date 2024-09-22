#include <stdio.h>
int main()
{

    double a, b;
    printf("Enter your Tution Fee:");
    scanf("%lf", &a);

    printf("\n\t'IF CASH' Enter              : 1\n\n\t'IF Two-Installment' Enter   : 2\n\n\t'IF Three-Installment' Enter : 3");
    printf("\n\nCHOOSE METHOD OF PAYMENT:");
    scanf("%lf", &b);
    if (b == 1)
    {
        a = a - (a * 10 / 100);
        printf("\n\tYou Have 10 percent Discount on CASH\n");
        printf("\n\tThe Amount of Payment: INR-'%.2lf'", a);
    }
    else if (b == 2)
    {
        a = a + (a * 5 / 100);
        printf("\n\tYou Have to pay 5% Intrust on Two-Installment.\n");
        printf("\n\tThe Amount of Payment for EACH Installment: INR-'%.2lf'", a / 2);
    }
    else if (b == 3)
    {
        a = a + (a * 10 / 100);
        printf("\n\tYou Have to pay 10% Intrust on Three-Installment.\n");
        printf("\n\tThe Amount of Payment for EACH Installment: INR-'%.2lf'", a / 3);
    }
    else
    {
        printf("'INVALLID' Input");
    }

    return 0;
}