/*
A|B|C|D|
A|B|C| |
A|B| | |
A| | | |
*/
#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i < 5; i++)
    {printf("|");
        for (j = 1; j < 5; j++)
        {
            if (j + i >= 6)
            {
                printf(" |");
            }
            else
            {
                printf("%c|", 64 + j);
            }
        }
        printf("\n");
    }

    return 0;
}