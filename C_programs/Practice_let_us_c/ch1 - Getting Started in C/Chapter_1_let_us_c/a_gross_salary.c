/*
Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary. 
*/

#include <stdio.h>

int main()
{
    float salary,dearness_allowance=0,house_rent_allowance=0,gross_salary=0;
    
    printf("Basic salary -- ");
    scanf("%f",&salary);

    dearness_allowance=salary*40/100;
    house_rent_allowance=salary*20/100;

    gross_salary=salary+dearness_allowance+house_rent_allowance;

    printf("dearness_allowance = %f\n",dearness_allowance);
    printf("house_rent_allowance = %f\n",house_rent_allowance);
    printf("gross_salary = %f",gross_salary);


 return 0;}