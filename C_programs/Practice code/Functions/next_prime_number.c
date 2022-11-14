#include <stdio.h>

int prime(int a)
{
    int i;
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
            break;
    }
    if (i == a)
        return 1;
    else
        return 0; /* code */
}
int next_prime_number(int a)
{
    int x;
    for (a++;;a++)
    {
        x = prime(a);
        if (x == 1)
        {
            return a;
        }
        else
            continue;
    }
}
#include <stdio.h>

int main()
{
    int a, b;
    printf("--");
    scanf("%d",&b);
    a = next_prime_number(b);
    printf("%d",a);
    return 0;
}