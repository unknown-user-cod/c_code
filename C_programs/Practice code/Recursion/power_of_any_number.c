#include <stdio.h>

int power_of_any_number(int a, int b)
{
    int s,j;
    if (b == 0)
    {
        return 0;
    }
    else
    {
        
        b=b-1;
        j = a *power_of_any_number(a, b );
        
    }printf("%d\n", j);
}

int main()
{
    int num, pow;
    printf("Enter number --");
    scanf("%d", &num);
    printf("Enter power --");
    scanf("%d", &pow);
    power_of_any_number(num, pow);

    return 0;
}
