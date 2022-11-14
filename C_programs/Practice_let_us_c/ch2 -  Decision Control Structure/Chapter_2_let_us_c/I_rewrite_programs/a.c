/*(a) main( )
{
 int x, min, max ;
 scanf ( "\n%d %d", &max, &x ) ;
 if ( x > max )
 max = x ;
 else
 min = x ;
} */
#include <stdio.h>

int main()
{
    int x,y,min,max;
    printf("First number - ");
    scanf("%d",&y);
    printf("Second number - ");
    scanf("%d",&x);
    if (x > y)
        
        {max = x;
        printf("Greater number - %d",max);}
    else
        {max = y;
        printf("Greater number - %d",max);}
    return 0;
}