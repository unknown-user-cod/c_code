
/*

|*|*|*|*|*|*|*|*|*|
|*|*|*|*| |*|*|*|*|
|*|*|*| | | |*|*|*|
|*|*| | | | | |*|*|
|*| | | | | | | |*|
|*|*| | | | | |*|*|
|*|*|*| | | |*|*|*|
|*|*|*|*| |*|*|*|*|
|*|*|*|*|*|*|*|*|*|

*/


#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {printf("|");
        for (j = 1; j <= 9; j++)
        {
            if (i <= 5)
            {
                if (j <= 6 - i || j >= 4 + i)
                {
                    printf("*|"); 
                }

                else
                {
                    printf(" |");
                }
            }
            else if (i >= 5)
            {
                if (j <= i-4 || j >= 14 - i)
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