/*If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number. */
#include <stdio.h>

int main(){
    int four_digit_number,first_digit,last_digit,sum;
    printf("Type a four digit number - ");
    scanf("%d",&four_digit_number);
    first_digit=four_digit_number/1000;
    last_digit=four_digit_number%10;
    sum=first_digit+last_digit;
    printf("Sum of first and last digit number is - %d",sum);
return 0;
}