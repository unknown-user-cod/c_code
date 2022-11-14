#include <stdio.h>

int main()
{
    float total_income,amount_income_tax;
    
    printf("Enter your income - ");
    scanf("%f",&total_income);
    
    if (total_income>=250000 && total_income<=500000)
    {
        amount_income_tax=(total_income/100)*5;
        printf("You have to pay %f",amount_income_tax);
        
    }
    else if (total_income>=500000 && total_income<=1000000)
    {
        amount_income_tax=(total_income/100)*20;
        printf("You have to pay %f",amount_income_tax);
        
    }
    else if (total_income>=1000000)
    {
        amount_income_tax=(total_income/100)*30;
        printf("You have to pay %f",amount_income_tax);
        
    }
    else
    {
        printf("You are not aligible for paying tax ");
    }
    
return 0;
}