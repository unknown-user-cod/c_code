/*
  | | | |1|
  | | |1|2|
  | |1|2|3|
  |1|2|3|4|
 1|2|3|4|5|
  |1|2|3|4|
  | |1|2|3|
  | | |1|2|
  | | | |1|

 */

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 9; i++)
    {printf("|");
        k = 1;
        for (j = 1; j <= 5; j++)
        {
            if (i > 5)
            {
                if (j >= i - 4)
                {
                    printf("%d|",k);
                    k++;
                }
                else
                {
                    printf(" |");
                }
            }
            if (i < 6)
            {
                if (j >= 6 - i)
                {
                    printf("%d|",k);
                    k++;
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