/*The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters. */

#include <stdio.h>

int main(){
   float  distance_in_km,meters, feet, inches, centimeters; 
    
    printf("Distance_in_km -- ");
    scanf("%f",&distance_in_km);

    meters=distance_in_km*1000;
    centimeters=meters*100;
    feet=meters*3.281;
    inches=meters*39.37; 

    printf("Distance in meters - %f\n",meters);
    printf("Distance in meters centimeters - %f\n",centimeters);
    printf("Distance in feet - %f\n",feet);
    printf("Distance in inches - %f\n",inches);   
    
    
    return 0;}