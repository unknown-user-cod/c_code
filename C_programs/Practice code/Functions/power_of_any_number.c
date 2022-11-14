#include <stdio.h>
int Cube_of_any_number(int a,int b)
{
    int j=1,i;
    for (size_t i = 1; i <= b; i++)
    {
        j=j*a;
    }
    return j;
    
}
int main(){
    int num,cube,pow;
    printf("Enter number -- ");
    scanf("%d",&num);
      printf("Enter power -- ");
    scanf("%d",&pow);
    cube=Cube_of_any_number(num,pow);
printf("cube of %d is %d",num,cube);
return 0;
}