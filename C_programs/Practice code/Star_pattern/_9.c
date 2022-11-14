/*
 | | | |*| | | | |
 | | |*| |*| | | |
 | |*| |*| |*| | |
 |*| |*| |*| |*| |
*| |*| |*| |*| |*|
*/

#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {printf("|");
        k = 1;
        for (j = 1; j <= 9; j++)
        {

            // if (j==6-i||(j==4+i||j==2+i||j==i-2||j==i))
            // {
            // if (j+i==4)
            // {
            //     printf(" |");
            // }
            // else if (i==1&&j==1)
            // {
            //     printf(" |");
            // }

            // else
            // printf("*|");
            // }
            if (j >= 6 - i && j <= 4 + i && k)
            {
                printf("*|");
                k = 0;
            }
            else
            {
                printf(" |");
                k = 1;
            }
        }
        printf("\n");
    }

    return 0;
}
