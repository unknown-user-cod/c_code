
/*
Two numbers are entered through the keyboard. Write a
program to find the value of one number raised to the power
of another.
*/
#include <stdio.h>
#include <math.h>
int main()
{
    float number = 1, x, y; //int value was not working
    printf("-- ");
    scanf("%f", &x);

    printf("-- ");
    scanf("%f", &y);

    number = pow(x, y);
    printf("%f", number);
    return 0;
}