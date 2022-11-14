/*(c) Write down macro definitions for the following: 
1. To find arithmetic mean of two numbers. 
2. To find absolute value of a number. 
3. To convert a uppercase alphabet to lowercase. 
4. To obtain the bigger of two numbers. 
*/
#include <stdio.h>
//#define CAPITAL_LETTER(a) (a+32)
#define SMALL_LETTER(b) (b+32)


int main(){
    char a,c;
    int b;

    printf("lowercase alphabet--");
    scanf("%c",&a);
    printf("%c \n",SMALL_LETTER(a));


//     printf("uppercase alphabet--");
//     scanf("%C",&b);
// b=b+32;
//     printf("%c ",b);
return 0;
}