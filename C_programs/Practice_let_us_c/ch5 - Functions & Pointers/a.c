/*(a) A 5-digit positive integer is entered through the keyboard,
write a function to calculate sum of digits of the 5-digit
number:
(1) Without using recursion
(2) Using recursion*/


#include <stdio.h>
int Without_using_recursion(int a);
int using_recursion(int b);

int main()
{
    int sum_r, sum, number;
    printf("--");
    scanf("%d", &number);
    // sum = Without_using_recursion(number);
    sum_r = using_recursion(number);
    printf("%d", sum_r);

    return 0;
}
int Without_using_recursion(int a)
{
    int i;
    i = a % 10;
    a = a / 10;
    i = i + a % 10;
    a = a / 10;
    i = i + a % 10;
    a = a / 10;
    i = i + a % 10;
    a = a / 10;
    i = i + a % 10;
    return (i);
}
int using_recursion(int b)
{
    int i = 0, s;
    if (b == 0)
    {
        return 0;
    }

    else
    {
        i = i + b % 10;
        s = i + using_recursion(b / 10);
        return (s);
    }
}
