#include <stdio.h>
int Cube_of_any_number(int a)
{
    int j=1,i;
    for (size_t i = 0; i <= 2; i++)
    {
        j=j*a;
    }
    return j;
    
}
int main(){
    int num,cube;
    printf("Enter number -- ");
    scanf("%d",&num);
    cube=Cube_of_any_number(num);
printf("cube of %d is %d",num,cube);
return 0;
}