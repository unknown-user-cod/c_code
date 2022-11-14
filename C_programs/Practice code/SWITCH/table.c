#include <stdio.h>

int main()
{
    int x,y=0;
    printf("-- ");
    scanf("%d",&x);
    while (y<11)
    {
        printf("%d x %d = %d\n",x,y,x*y);
        y++;
    }
    
    return 0;
}