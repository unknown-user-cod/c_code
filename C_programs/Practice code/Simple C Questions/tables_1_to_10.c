#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
           if (i * j<10)
           {
            printf("  %d", i * j);
           }
           else
           {
            printf(" %d", i * j);
           }
             
        }

        printf("\n"); /* code */
    }

    /* code */
    return 0;
}
