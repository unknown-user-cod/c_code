/*
If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.
*/
#include <stdio.h>

int main()
{
    int five_digit_number, sum = 0, value = 10000, digit = 10;
    int  reverse, count = 0;
    printf("Enter a five digit number - ");
    scanf("%d", &five_digit_number);
    printf("Reversed Number - ");
    while (count <= 4)
    {
        sum=five_digit_number/value;
        //sum = five_digit_number % 10;
        sum=sum+1;
        
        if (sum==10)
            sum=0;
        printf("%d", sum);
        
        five_digit_number = five_digit_number % value;
        value=value/10;
        count++;
    }

    return 0;
}