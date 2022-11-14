#include <stdio.h>

int main()
{
    int length, breadth, area;

    printf("Type Length and Breadth  of rectangle - ");
    scanf("%d", &length);

    printf("Breadth of rectangle - ");
    scanf("%d", &breadth);

    area = length * breadth;
    printf("Area  rectangle - %d", area);

    return 0;
}