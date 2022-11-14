#include <stdio.h>

int main()
{
    float first_sub_per, sec_sub_per, third_sub_per, total_sub_per;
    float first_sub,sec_sub,third_sub;

    printf("First subject marks - ");
    scanf ("%f",&first_sub);

    printf("Second subject marks - ");
    scanf ("%f",&sec_sub);

    printf("Third subject marks - ");
    scanf ("%f",&third_sub);


    first_sub_per=first_sub/100;
    sec_sub_per=sec_sub/100;
    third_sub_per=third_sub/100;
    total_sub_per=((first_sub+sec_sub+third_sub)/300)*100;

    if (first_sub_per>=33||sec_sub_per>=33||third_sub_per>=33||total_sub_per>=40)
    {
        printf("PASS WITH \nPERCENTAGE - %f",total_sub_per);
    }
    else
    {
        printf("FAIL \n WITH PERCENTAGE - %f",total_sub_per);
    }
     
    return 0;
    
    }