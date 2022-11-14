/*
 | | |*| | | |
 | |*|*|*| | |
 |*|*|*|*|*| |
*|*|*|*|*|*|*| 
*/

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {printf("|");
        for (j = 1; j < 8; j++)
        {
            if (i+j<=4)
            {
                printf(" |");
            }
            else if (j-i>=4)
            {
                printf(" |");
            }
            else
            {
                printf("*|");
            }
            
            
        }
        printf("\n");
    }

    return 0;
}