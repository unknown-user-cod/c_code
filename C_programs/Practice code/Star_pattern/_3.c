/* 
 | | |1| | | |
 | |1|2|1| | |
 |1|2|3|2|1| |
1|2|3|4|3|2|1|
*/


#include<stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {printf("|");
        for (j = 1; j < 8; j++)
        {
            if (i+j<=4)
            {
                printf(" |");
            }
            else if (j-i>=4)
            {
                printf(" |");
            }
            else if (j==4)
            {
                printf("%d|",i);
                
            }
            else if (i+j==5||j-i==3)
            {
                printf("1|");
            }
            else if (i+j==6||j-i==2)
            {
                printf("2|");
            }
            else if (i+j==7||j-i==1)
            {
                printf("3|");
            }
            
            
            
        }
        printf("\n");
    }

    return 0;
}