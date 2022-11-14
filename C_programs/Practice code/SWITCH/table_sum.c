#include <stdio.h>

int main()
{
    int x,y=0,sum=0;
    printf("-- ");
    scanf("%d",&x);
    while (y<11)
    {
        printf("%d x %d = %d\n",x,y,x*y);
        sum=sum+(x*y);
        y++;
    }
    printf("%d",sum);
    return 0;
}