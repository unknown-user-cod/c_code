/*(b) A positive integer is entered through the keyboard, write a
program to obtain the prime factors of the number. Modify the
function suitably to obtain the prime factors recursively.
*/
#include <stdio.h>

void prime_factors(int a);
void prime_factors_recursively(int b);

int main()
{
    int num;
    printf("--");
    scanf("%d",&num);
    prime_factors(num);

    return 0;
}

void prime_factors(int a)
{
    int i, j;
    // for (size_t i = 2; i <= a / 2; i++)
    // {
    //     if (a % i == 0)
    //     {
    //         break; 
    //     }
    // }
    // if (i == a / 2 + 1)
    // {
    //     printf("prime");
    // }
    // else
    //     printf("n prime");


}

void prime_factors_recursively(int a)
{
}