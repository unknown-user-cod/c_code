/*Write a program to enter the numbers till the user wants and
at the end it should display the count of positive, negative and
zeros entered.*/
#include <stdio.h>

int main()
{
    int input;
    int positive = 0, zero = 0, negative = 0;
    printf("111 -- exit\n");

    while (1)
    {
        printf(" enter the numbers -- ");

        scanf("%d", &input);
        if (input == 111)
        {
            break;
        }
        
        else if (input < 0)
        {
            negative++;
        }
        else if (input > 0)
        {
            positive++;
        }
        else if (input == 0)
        {
            zero++;
        }
        
        printf("\n                                   negative -- %d", negative);
        printf("\n                                   positive -- %d", positive);
        printf("\n                                       zero -- %d\n", zero);
    }

    return 0;
}