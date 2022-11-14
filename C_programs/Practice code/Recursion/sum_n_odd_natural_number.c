#include <stdio.h>

int sum_odd_n_natural_number(int n)
{

    if (n == 0)
    {
        return 0;
    }
    return 2*n-1 + sum_odd_n_natural_number(n - 1); 
    
}

int main()
{
    int n;
    int sum_odd;
    printf("--");
    scanf("%d", &n);
    sum_odd = sum_odd_n_natural_number(n);
    printf("%d", sum_odd);
    return 0;
}