#include <stdio.h>
#include<stdlib.h>
#include<time.h>
// Change this number if want ot change guess number...

int main()
{
     srand(time(0));
    int num = (rand()%100)+1;
    int i, j = 2;
    char yo;

    printf("\n\t\t\t\t\t'WELCOME To GUESSING Game'\n");
    printf("\n\t\t\tGuess The right Number Between '1 - 100' to Win Game(Only 5 Turns)\n");
yo:
    printf("\n\t\t\t\t\t\tTry Guess:");
    scanf("%d", &i);

    for (j; j <= 5; j++)
    {

        // if ((i >= num - 15 && i <= num - 1) || (i >= num + 1 && i <= num + 15))
        // {
        //     printf("\n\t\t\t\tOpps Wrong Answer but You are 'CLOSE' to Number");

        //     printf("\n\n\t\t\t\t\t\tTurn no : %d Try Guessing again:",j);
        //     scanf("%d", &i);
        // }

     if (i < num )
        {
            printf("\n\t\t\t\tOpps Wrong Answer you Guessed Small Number");
            printf("\n\n\t\t\t\t\t\tTurn no : %d Try Guessing again:",j);
            scanf("%d", &i);
        }

        else if (i > num )
        {
            printf("\n\t\t\t\tOpps Wrong Answer You Guessed grater Number");
            printf("\n\n\t\t\t\t\t\tTurn no : %d Try Guessing again:",j);
            scanf("%d", &i);
        }

        else if (i < 1 || i > 100)
        {
            printf("\n\t\t\t\t\t'INVELID NUMBER' Only '1 to 100' Allowed...");
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
        printf("\n\t\t\t\t\t\tOH-NO You LOST the Number was %d",num);
    }

    return 0;
}
