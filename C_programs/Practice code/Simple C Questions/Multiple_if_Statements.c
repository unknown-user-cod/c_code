#include <stdio.h>

int main(){

    int num,result ;
    printf("please enter your number for inspection");
    scanf("%d",&num);

    result=num%2;

    if (result==0)
    {
        printf("Entered number is even");
    }
    if (result!=0)
    {
        /* code */
        printf("Entered number is odd");
    }
    
    
    return 0;}