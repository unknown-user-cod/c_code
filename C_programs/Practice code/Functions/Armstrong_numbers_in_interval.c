#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;
    int s, num,a=0;

    printf("--");
    scanf("%d", &num);

    while (i <= 4)
    {
        while (j <= 9)
        {
            while (k <= 9)
            {
                s = (i * i * i) + (j * j * j) + (k * k * k);
                if (s == num)
                {
                    printf("%d a \n", s);
                    i=4;
                    a=1;
                    break;
                }
                // printf("%d\n", s);
                k++;
            }
            j++;
            k = 0;
        }
        i++;
        j = 0;
    }
    if (a == 0 )
    {
        printf("na");
    }

    return 0;
}