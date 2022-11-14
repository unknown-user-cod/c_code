/*
 A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer.
*/

#include <stdio.h>

int main(){
    int amount;
    printf("--");
    scanf("%d",&amount);
    printf("If paying in 100 number of notes --%d\n",amount/100);
    printf("If paying in 50 number of notes --%d\n",amount/50);
    printf("If paying in 10 number of notes--%d\n",amount/10);
    return 0;}