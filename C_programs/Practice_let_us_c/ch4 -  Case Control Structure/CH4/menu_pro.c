/*
Write a menu driven program which has following options:
1. Factorial of a number.
2. Prime or not
3. Odd or even
4. Exit
*/
#include <stdio.h>

int main()
{
    int number, factorial = 1, num, result, i, choice = 4;
    while (1)
    
    {
        printf("\n\n1. Factorial");
        printf("\n2. Prime");
        printf("\n3. Odd/Even");
        printf("\n4. Exit");
        printf("\nYour choice? ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1: // logic for factorial of a number

            printf("Type the number for factorial -- ");
            scanf("%d", &number);
            if (number == 1 || number == 0)
            {
                printf("The factorial is -- 1\n");
            }
            else if (number >= 1)
            {
                for (; number > 0;)
                {
                    factorial = factorial * number;
                    number--;
                }

                printf("The factorial is -- %d \n", factorial);
            }
            else
            {
                printf("int value only ");
            }
            break;

        case 2: // logic for deciding prime number

            printf("Enter a number -- ");
            scanf("%d", &num);

            switch (num)
            {
            case 1:
            {
                printf("%d is not a prime number",num);
                break;
            }
            case 2:
            {
                printf("%d is an prime number",num);
                break;
            }
            }

            for (int a = 2; a <= num-1; a++) // cheaking divisin of given number,
            {                              // from 2 to one less then the number given 4
                if (num % a == 0)
                {
                    printf("%d is not a prime number",num);
                    break; // if remove break it's become an infinite loop
                }
                else
                {
                    printf("%d is an prime number",num);
                    break; // if remove break it's become an infinite loop
                }
            }

            break;
        case 3: // logic for odd/even

            printf("please enter your number for inspection");
            scanf("%d", &num);

            result = num % 2;

            if (result == 0)
            {
                printf("%d is even",num);
            }
            if (result != 0)
            {

                printf("%d is odd",num);
            }

            break;
        case 4:
            break;
        }
    }  
return 0;
}