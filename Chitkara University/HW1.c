/*A Company wants to calculate 'Gross-Pay' of the workers. The gross pay will be calculated based upon 3 Inputer

1.) Number of hours Worked in pay period
2.) Hours pay rate.
3.) Percentage(%) of gross salary i.e, with held gross-pay is calculated by multiplying H.P.R with number of hours worked
4.) The with-heald amount need to be deducted from the gross-pay to calculate net pay after tex-reduction.
"W A P to to clculate and print net pay after tex deduction " */

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the Number of Employs:");
    scanf("%d", &a);

    if (a == 1)
    {
        double hour, payrate, grossPay, netPay, diduction, tax;
        printf("\nEnter the Number of hours employ worked:");
        scanf("%lf", &hour);
        printf("\nEnter the hour pay rate:");
        scanf("%lf", &payrate);
        grossPay = hour * payrate;
        printf("\nEnter the 'With-Held' amount percent:");
        scanf("%lf", &diduction);
        tax = grossPay * diduction / 100;
        netPay = grossPay - tax;
        printf("\n\tNet Pay: INR-'%.2lf'", netPay);
    }

    else if (a > 1)
    {
        double hour, payrate, grossPay, netPay, diduction, tax;
        printf("\nEnter the Number of hours emploies worked:");
        scanf("%lf", &hour);
        printf("\nEnter the hour pay rate:");
        scanf("%lf", &payrate);
        grossPay = hour * payrate;
        printf("\nEnter the 'With-Held' amount percent:");
        scanf("%lf", &diduction);
        tax = grossPay * diduction / 100;
        netPay = grossPay - tax;
        netPay = netPay * a;
        printf("\n\tTotal Pay for %d Employs: INR-'%.2lf'", a, netPay);
        printf("\n\n\tEach-one Should get: INR-'%.2lf' if Split Equaly", netPay / a);
    }
    else
    {
        printf("\n\tValue entered is 'INVELID'");
    }
    return 0;
}