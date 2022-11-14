#include <stdio.h>

int main()
{ 
    int a;
    float principle, rate, interest, time, si;
    // printf("\n %f %f %f %f",principle,rate,interest,si);

    printf("principle - ");
    scanf("%f", &principle);
     
    a=2-2;
    
    printf("\nrate - ");
    scanf("%f", &rate);

    printf("\ntime - ");
    scanf("%f", &time);

    si = principle * rate * time / 100;
    printf("\nsi %f", si);

    return 0;
}