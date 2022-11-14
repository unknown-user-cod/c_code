#include <stdio.h>

void n_natural_number(int n)
{
    if (n > 0)
    {
        n_natural_number(n - 1);
        printf("%d \n", 2 * n);
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