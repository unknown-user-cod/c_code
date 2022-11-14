/*Write a program to print out all Armstrong numbers between 
1 and 500. If sum of cubes of each digit of the number is 
equal to the number itself, then the number is called an 
Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
* 5 ) + ( 3 * 3 * 3 ) 
*/
#include <stdio.h>

int main(){
    int a,b,c,number,i;
    for (size_t number = 1; number < 501; number++)
    {
        i=number;
        c=i%10;
        i=i/10;
        b=i%10;
        i=i/10;
        a=i;
        printf("Armstrong number of %d = ( %d * %d * %d ) + ( %d * %d * %d ) + ( %d * %d * %d ) = %d\n",number,a,a,a,b,b,b,c,c,c,( a * a * a ) + ( b * b * b ) + ( c * c * c ) );
    }
    
return 0;
}