#include <stdio.h>

void n_natural_number(int n)
{
    if (n>0)
    {
        printf("%d  ", n);
        n_natural_number(n-1);
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