#include <stdio.h>

int sum_square_n_natural_number(int n)
{

    if (n == 0)
    {
        return 0;
    }
    return n*n + sum_square_n_natural_number(n - 1); 
    
}

int main()
{
    int n;
    int sum;
    printf("--");
    scanf("%d", &n);
    sum = sum_square_n_natural_number(n);
    printf("%d", sum);
    return 0;
}