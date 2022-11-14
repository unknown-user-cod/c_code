#include <stdio.h>

int main(){
    int i,j=2,k=3,num;
    printf(" -- ");
    scanf("%d",&num);
    printf(" 2 ");
    for (size_t i = 1; i < num; i++)
    {
        j=j+k;
        printf("%d  ",j);
        k=k+2;
    }
    
return 0;
}