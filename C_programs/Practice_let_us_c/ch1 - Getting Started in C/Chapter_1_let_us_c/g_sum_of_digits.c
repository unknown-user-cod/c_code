/* If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits.*/
#include <stdio.h>

int main(){
   /* int first_digit,second_digit,third_digit,fourth_digit,fivth_digit,sum;

    scanf("%d %d %d %d %d", &first_digit, &second_digit, &third_digit,&fourth_digit,&fivth_digit);
    sum=first_digit+second_digit+third_digit+fourth_digit+fivth_digit;
    printf("Sum of digit of number %d",sum);*/

    int four_digit_number,sum=0,digit=0;
    printf("Enter a four digit number - ");
    scanf("%d",&four_digit_number);

    for (size_t i = 0; i <=3; i++)
    {
        digit=four_digit_number%10;
        sum=sum+digit;
        four_digit_number=four_digit_number/10;
        
    }
    printf("Sum of digit's of the given number - %d",sum);
    
return 0;
}