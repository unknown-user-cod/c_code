/*
A|B|C|D|C|B|A|
A|B|C| |C|B|A|
A|B| | | |B|A|
A| | | | | |A|
 */

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {printf("|");
        k = 65;
        for (j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i)
            {
                if (j <= 5 - i)
                {
                    printf("%c|", k);
                    if (j==4)
                    {
                        k--;
                    }
                    
                    k++;
                }
                else
                {
                    k--;
                    printf("%c|", k);
                }

                // printf("*|");
            }
            else
            {
                printf(" |");
            }
        }
        printf("\n");
    }

    return 0;
}