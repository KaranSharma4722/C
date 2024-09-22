#include <stdio.h>
#define num 25 // Change this number if want ot change guess number...

int main()
{

    int i, j = 1;
    char yo;

    printf("\n\t\t\t\t\t'WELCOME To GUESSING Game'\n");
    printf("\n\t\t\tGuess The right Number Between '1 - 100' to Win Game(Only 5 Turns)\n");
yo:
    printf("\n\t\t\t\t\t\tTry Guess:");
    scanf("%d", &i);

    for (j; j <= 4; j++)
    {

        if ((i >= num - 15 && i <= num - 1) || (i >= num + 1 && i <= num + 15))
        {
            printf("\n\t\t\t\tOpps Wrong Answer but You are 'CLOSE' to Number");

            printf("\n\n\t\t\t\t\t\tTry Guessing again:");
            scanf("%d", &i);
        }

        else if (i < num - 15 && i > 0)
        {
            printf("\n\t\t\t\tOpps Wrong Answer but You are ' TOO - LOW ' to Number");
            printf("\n\n\t\t\t\t\t\tTry Guessing again:");
            scanf("%d", &i);
        }

        else if (i > num + 15 && i < 100)
        {
            printf("\n\t\t\t\tOpps Wrong Answer but You are ' TOO - HIGH ' to Number");
            printf("\n\n\t\t\t\t\t\tTry Guessing again:");
            scanf("%d", &i);
        }

        else if (i < 1 || i > 100)
        {
            printf("\n\t\t\t\t\t'INCELID NUMBER' Only '1 to 100' Allowed...");
            goto yo;
        }

        else
        {
            printf("\n\t\t\t\t\tCongrulations you 'WON'");
            break;
        }
    }
    if (i != num)
    {
        printf("\n\t\t\t\t\t\tOH-NO You LOST");
    }

    return 0;
}
