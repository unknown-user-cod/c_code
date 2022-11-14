#include <stdio.h>

int main()
{

    int num, i;
    printf("Enter a number ");
    scanf("%d", &num);
    switch(num)
    {
        case 1:
        {
            printf("Not a prime number");
            break;
        }
        case 2:
        {
            printf("it's an prime number");
            break;
        }
    }

    i = 2;

    while (i <= num - 1) // cheaking divisin of given number,
    {                    // from 2 to one less then the number given4
        if (num % i == 0)
        {
            printf("Not a prime number");
            break; // if remove break it's become an infinite loop
        }
        else
        {
            printf("it's a prime number");
            break; // if remove break it's become an infinite loop
        }
        i++;
    }
    

    return 0;
}