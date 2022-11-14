#include <stdio.h>

int n_natural_number(int a)
{

    if (a == 1)
    {
        printf("%d \n",a);
        return 0;
    }
    printf("%d \n",a);
    n_natural_number(a - 1);
}

int main()
{
    int num;
    printf("--");
    scanf("%d", &num);
    n_natural_number(num);
    return 0;
}