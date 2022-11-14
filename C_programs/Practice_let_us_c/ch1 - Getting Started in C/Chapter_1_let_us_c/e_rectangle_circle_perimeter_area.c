/*
The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle.
 */ 
#include <stdio.h>

int main()
{
    // rectangle
    int length, breadth, area, perimeter;

    printf("Length of rectangle - ");
    scanf("%d", &length);

    printf("Breadth of rectangle - ");
    scanf("%d", &breadth);

    area = length * breadth;
    perimeter = 2*(length+breadth);
    printf("Area of rectangle - %d", area);
    printf("perimeter of  rectangle - %d", perimeter);

// circle
    float radius, pi,area_Cir, perimeter_Cir;
    pi = 3.14;
    
    printf("\n");
    printf("Type radius of circle - ");
    scanf("%f", &radius);

    area_Cir = ((2 * pi) * (radius * radius));
    perimeter_Cir = 2*pi*radius;
    printf("Area of circle - %f", area_Cir);
    printf("perimeter of circle - %f", perimeter_Cir);
    return 0;
}