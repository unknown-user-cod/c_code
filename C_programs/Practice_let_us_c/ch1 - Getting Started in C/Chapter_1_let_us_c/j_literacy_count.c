/*In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number 
of illiterate men and women if the population of the town is 
80,000.*/
#include <stdio.h>

int main(){
    float  total_litracy,litrate_men,litrate_women,total_men,total_women;

    printf("Total population of town - 80,000 \n");
    total_men=80000*52/100;

    printf("Total number of men - %f \n",total_men);
        total_women=(80000-(80000*52/100));

    printf("Total number of women - %f \n",total_women);


    printf("Percentage of total literacy - 48 \n");
    total_litracy=80000*48/100;
    printf("Total number of literate people in town - %f \n",total_litracy);
    
    
    printf("total percentage of literate men is - 35 \n");
    
    litrate_men=80000*35/100;
    printf("Number of literate men - %f \n",litrate_men);
    printf("number of illitrate men - %f \n",total_men-litrate_men);
    litrate_women=total_litracy-litrate_men;
    printf("total literate women - %f \n",litrate_women);
    printf("total ilerate women - %f \n",total_women-litrate_women);
    //scanf("%d",&);
return 0;
}