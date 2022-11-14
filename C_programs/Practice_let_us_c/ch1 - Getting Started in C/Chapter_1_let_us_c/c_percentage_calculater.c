/*If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100*/
#include <stdio.h>

int main()
{
    float  total_sub_per;
    float first_sub,sec_sub,third_sub;

    printf("First subject marks - ");
    scanf ("%f",&first_sub);

    printf("Second subject marks - ");
    scanf ("%f",&sec_sub);

    printf("Third subject marks - ");
    scanf ("%f",&third_sub);


    total_sub_per=((first_sub+sec_sub+third_sub)/300)*100;

    
    printf("PASS WITH \nPERCENTAGE - %f ",total_sub_per);
    
    return 0;
    
    }