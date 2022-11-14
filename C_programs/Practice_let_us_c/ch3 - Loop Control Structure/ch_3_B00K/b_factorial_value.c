/* Write a program to find the factorial value of any number 
entered through the keyboard. */
#include <stdio.h>

int main(){
    int number,factorial=1;
    printf("Type the number for factorial -- ");
    scanf("%d",&number);
    if (number==1||number==0)
    {
        printf("The factorial is -- 1");
    }
    else if (number>=1)
    {
        while (number>0)
        {
            factorial=factorial*number;
            number--;
        }
        
        printf("The factorial is -- %d",factorial);
    }
    else
    {
        printf("asdfghjk");
    }
    
    return 0;}