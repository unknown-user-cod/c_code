#include <stdio.h>

void n_natural_number(int n)
{
    if (n > 0)
    {
        if (n % 2 != 0)
        {
            //printf("Square of %d is = %d \n", n, n * n);
            printf("%d \n",n);
           
        } n_natural_number(n - 1);
    }
}

int main()
{
    int n;
    printf("--");
    scanf("%d", &n);
    n_natural_number(n);
    return 0;
}