/*
 | | |*| | | |
 | |*|*|*| | |
 |*|*|*|*|*| |
*|*|*|*|*|*|*|
 |*|*|*|*|*| |
 | |*|*|*| | |
 | | |*| | | |
*/


#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {printf("|");
        for (j = 1; j <= 7; j++)
        {
            if (i < 5)
            {
                if (j >= 5 - i && j <= 3 + i)

                    printf("*|");
                else
                    printf(" |");
            }
            if (i >= 5)
            {
                if (j >= i - 3 && j <= 11 - i)
                {
                    printf("*|");
                }
                else
                {
                    printf(" |");
                }
            }
        }
        printf("\n");
    }

    return 0;
}