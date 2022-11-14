/*
Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every 
hour worked above 40 hours. Assume that employees do not 
work for fractional part of an hour. 
*/
#include <stdio.h>

int main(){
int number_of_employees,Overtime_hr ,Amount_overtime;

    printf("Number of employees -- ");
    scanf("%d",&number_of_employees);

    printf("Overtime hour -- ");
    scanf("%d",&Overtime_hr);

    Amount_overtime=number_of_employees*Overtime_hr*12;

    printf("Overtime amount -- %d",Amount_overtime);


    return 0;}

