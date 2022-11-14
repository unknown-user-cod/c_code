/*
| | | |1|2|3|4|5|
| | |1|2|3|4|5| |
| |1|2|3|4|5| | |
|1|2|3|4|5| | | |

*/

#include <stdio.h>

int main()
{
    int i, j,p;
    for (i = 1; i <= 4; i++)
    {printf("|");
    p=1;

        for (j = 1; j <= 8; j++)
        {
            if (j>=5-i&&j<=9-i)
            {
               printf("%d|",p);
               p++;
              
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