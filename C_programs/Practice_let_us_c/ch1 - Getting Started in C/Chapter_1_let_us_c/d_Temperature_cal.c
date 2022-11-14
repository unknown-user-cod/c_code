/*Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees. */
#include <stdio.h>

int main(){
    float temp_in_Fahrenheit, temp_in_Centigrade;

    printf("Temp in fahrenheit degrees--");
    scanf("%f",&temp_in_Fahrenheit);
    
    temp_in_Centigrade=(temp_in_Fahrenheit-32)*.5556;

    printf("temp_in_Centigrade = %f",temp_in_Centigrade);
    
    return 0;}