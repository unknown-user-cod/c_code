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
    {
        printf("|");
        for (j = 1; j < 8; j++)
        {
            if (j >= (5 + 1) - i && j <= (3 - 1) + i)
            {
                printf(" |");
            }
            else
            {
                switch (j)
                {
                case 1:
                    printf("A|");
                    break;
                case 2:
                    printf("B|");
                    break;
                case 3:
                    printf("C|");
                    break;
                case 4:
                    printf("D|");
                    break;
                case 5:
                    printf("C|");
                    break;
                case 6:
                    printf("B|");
                    break;
                case 7:
                    printf("A|");
                    break;
                default:
                    break;
                }
                // printf("#|");
                // printf("%c|",k);
            }
        }
        printf("\n");
    }

    return 0;
}