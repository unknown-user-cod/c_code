/*

 | | | |
 | | |*|
 | |*|*|
 |*|*|*|
*|*|*|*|

*/

#include <stdio.h>

int main(){
    int i,j;
    for ( i = 0; i <= 4; i++)
    {printf("|");
        for ( j = 0; j < 4; j++)
        {
            if (i<4-j)
            {
                printf(" |");
            }
            else 
                printf("*|");
        }
        printf("\n");
    }
    
    
return 0;
}