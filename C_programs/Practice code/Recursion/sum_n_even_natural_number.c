#include <stdio.h>

int product_n_natural_number(int n)
{

    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n % 2 == 0)
        {
            return n + product_n_natural_number(n - 2); /* code */
        }
        else
            product_n_natural_number(n - 1);
    }
}

int main()
{
    int n;
    int product;
    printf("--");
    scanf("%d", &n);
    product = product_n_natural_number(n);
    printf("%d", product);
    return 0;
}