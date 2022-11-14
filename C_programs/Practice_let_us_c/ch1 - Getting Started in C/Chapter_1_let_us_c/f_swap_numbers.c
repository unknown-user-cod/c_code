 /*
Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.
*/
#include <stdio.h>

int main(){
    int c,d,e;
    printf("c -- ");
    scanf("%d",&c);
    printf("d -- ");
    scanf("%d",&d);

    e=c;
    c=d;
    d=e;


    printf("c = %d\n",c);
    printf("d = %d",d);
    return 0;}