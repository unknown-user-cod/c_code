/*


*/

#include <stdio.h>

int main()
{
    int i, j, p;
    char q;
    for (i = 1; i <= 4; i++)
    {printf("|");
        p = 1;
        q = 'A';
        for (j = 1; j <= 8; j++)
        {
            if (j >= 5 - i && j <= 4 + i)
            {
                if (j<5)
                {
                    printf("%c|",q);
                    q++;
                }
                else if (j>4)
                {
                    printf("%d|",p);
                    p++;
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