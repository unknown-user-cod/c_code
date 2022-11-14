/*(b) Write macro definitions with arguments for calculation of 
area and perimeter of a triangle, a square and a circle. Store 
these macro definitions in a file called “areaperi.h”. Include 
this file in your program, and call the macro definitions for 
calculating area and perimeter for different squares, triangles 
and circles. 
*/

#include <stdio.h>

#define AREA_OF_CIRCLE(RADIUS) (3.14*RADIUS*RADIUS)
#define AREA_OF_TRIANGLE(BREADTH,LENGTH,HEIGHT) (0.5*BREADTH*LENGTH*HEIGHT)
#define AREA_OF_SQUARE(SIDE) (SIDE*SIDE)


#define PERIMETER_OF_SQUARE(SIDE) (4*SIDE)
#define PERIMETER_OF_TRIANGLE(BREADTH,LENGTH,HEIGHT) (BREADTH+LENGTH+HEIGHT)
#define PERIMETER_OF_CIRCLE(RADIUS) (2*3.14*RADIUS)

int main(){
float radius,length,breadth,height;
int side;
printf("radius --");
scanf("%f",&radius);
printf("AREA_OF_CIRCLE -- %f\n",AREA_OF_CIRCLE(radius));
printf("PERIMETER_OF_CIRCLE -- %f\n\n",PERIMETER_OF_CIRCLE(radius));

printf("side --");
scanf("%d",&side);
printf("AREA_OF_SQUARE -- %d\n",AREA_OF_SQUARE(side));
printf("PERIMETER_OF_SQUARE -- %d\n\n",PERIMETER_OF_SQUARE(side));

printf("length --");
scanf("%f",&length);
printf("breadth --");
scanf("%f",&breadth);
printf("height --");
scanf("%f",&height);
printf("AREA_OF_TRIANGLE -- %f\n",AREA_OF_TRIANGLE(breadth,height,length));
printf("PERIMETER_OF_TRIANGLE -- %f\n\n",PERIMETER_OF_TRIANGLE(breadth,height,length));

return 0;
}