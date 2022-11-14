/*If a five-digit number is input through the keyboard, write a
program to reverse the number. */
#include <stdio.h>

int main()
{
    int five_digit_number, reverse, count = 0;
    printf("Enter a five digit number - ");
    scanf("%d", &five_digit_number);
    printf("Reversed Number - ");
    while (count <= 4)
    {
        reverse = five_digit_number % 10;
        printf("%d", reverse);
        five_digit_number = five_digit_number / 10;
        count++;
    }

    return 0;
}