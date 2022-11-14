/*
*| | | |
*|*| | |
*|*|*| |
*|*|*|*|
*|*|*| |
*|*| | |
*| | | |
*/

#include <stdio.h>

int main()
{
    int i,j;
    for (i = 1; i <= 7; i++)
    {printf("|");
        for (j = 1; j <= 4; j++)
        {
            if (i < 5)
            {
                if (j <= i)
                {
                    printf("*|");
                }
                else
                {
                    printf(" |");
                }
            }
            if (i > 4)
            {
                if (j <= 8 - i )
                {
                    printf("*|");
                    k++;
                }
                else
                    printf(" |");
            }
        }
        printf("\n");
    }

    return 0;
}