#include <stdio.h>

int main()
{

    float radius, pi, area, height;
    pi = 3.14;
    
    printf("\n");
    printf("Type radius of circle - ");
    scanf("%f", &radius);

    area = ((2 * pi) * (radius * radius));
    printf("Area - %f", area);
    
    printf("\n");
    printf("\n");

    printf("Height of cylinder - ");
    scanf("%f", &height);
   
    printf("Radius of cylinder - ");
    scanf("%f", &radius);

    area = 2 * pi * radius * height;
    printf("Area - %f", area);

    return 0;
}