/*Write a program to print all the ASCII values and their 
equivalent characters using a while loop. The ASCII values 
vary from 0 to 255.*/
#include <stdio.h>

int main()
    
{ 
 unsigned char ch ; 
 for ( ch = 1 ; ch <= 253 ; ch++ ) 
 printf ( "\n%d %c", ch, ch ) ; 

    return 0;}