/*
 | | |1| | | |
 | |1|2|1| | |
 |1|2|3|2|1| |
1|2|3|4|3|2|1|
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 4; i++)
    {printf("|");
        k = 0;
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j < 4 + i)
            {
                if (j <= 4)
                {
                    //++k;
                    k++;
                    printf("%d|", k);
                }
                else if (4<=j)

                {
                    k--;
                    printf("%d|", k);
                }
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