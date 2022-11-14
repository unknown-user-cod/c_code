/*
Convert a temperature reading in degrees Fahrenheit to degrees Celsius, using the formula 
C = (5/9)x (F- 32) 
Test the program with the following values: 68, 150,212,0, -22, -200 (degrees Fahrenheit). 

*/


#include <stdio.h>

int main(){
    float Fahrenheit,Celsius;
    printf("Enter temp in Fahrenheit -- ");
    scanf("%f",&Fahrenheit);
    Celsius=(5/9)*(Fahrenheit-32);
    printf("Temp in Celsius -- %d",Celsius);
    
return 0;
}