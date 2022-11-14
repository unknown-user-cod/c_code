#include<stdio.h>
int main()
{
int length_cuboid,breadth_cuboid,height_cuboid;

int diagonal_Of_cuboid,area_of_cuboid,volume_of_cuboid;

int length_cube;

int area_cube,volume_of_cube;


printf("length_cuboid ");
scanf( "%d",&length_cuboid);

printf("breadth_cuboid ");
scanf( "%d",&breadth_cuboid);

printf("height_cuboid ");
scanf( "%d",&height_cuboid);

diagonal_Of_cuboid= (length_cuboid*length_cuboid)+(breadth_cuboid*breadth_cuboid)+(height_cuboid*height_cuboid);
volume_of_cuboid=length_cuboid*breadth_cuboid*height_cuboid;
area_of_cuboid=2*(length_cuboid*breadth_cuboid+length_cuboid*height_cuboid+breadth_cuboid*height_cuboid);


printf("diagonal_Of_cuboid %d \n",diagonal_Of_cuboid);
printf("volume_of_cuboid %d \n",volume_of_cuboid);
printf("area_of_cuboid %d \n",area_of_cuboid);


printf("length_cube ");
scanf( "%d",&length_cube);

area_cube=length_cube*length_cube;
volume_of_cube=length_cube*length_cube*length_cube;

printf("area_cube %d \n",area_cube);
printf("volume_of_cube %d ",volume_of_cube);


}