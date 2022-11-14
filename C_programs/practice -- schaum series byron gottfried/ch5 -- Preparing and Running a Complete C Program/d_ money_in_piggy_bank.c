/*
Determine how much money (in dollars) is in a piggy bank that contains several half-dollars, quarters, 
dimes, nickels and pennies. Use the following values to test your program: 11 half-dollars, 7 quarters, 3 
dimes, 12 nickels and 17 pennies. (Answer: $8.32). 

*/

#include <stdio.h>

int main(){
    int dollars, half_dollars,quarters,dimes,nickels,pennies,total;

printf("Number of dollars -- ");
scanf("%d",&dollars);

printf("Number of half_dollars -- ");
scanf("%d",&half_dollars);

printf("Number of quaters -- ");
scanf("%d",&quarters);

printf("Number of dimes -- ");
scanf("%d",&dimes);

printf("Number of nickles -- ");
scanf("%d",&nickels);

printf("Number of pennies -- ");
scanf("%d",&pennies);

total=2;
printf("Total money  -- %d",total);
return 0;
}