#include <stdio.h>

int product_n_natural_number(int n)
{
    
    if (n == 0)
    {
        return 1;
    }
    return n * product_n_natural_number(n - 1);
    
}

int main()
{
    int n;int product;
    printf("--");
    scanf("%d", &n);
    product=product_n_natural_number(n);
    printf("%d", product);
    return 0;
}