/*
(a) How will you initialize a three-dimensional array
threed[3][2][3]? How will you refer the first and last element
in this array?
*/

#include <stdio.h>

int main()
{
    int i,j,k;
    int array[3][2][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18};

    array[1][1][1] = 10;
    array[3][2][3] = 10;

    for (i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                printf("array[%d][%d][%d] = %d \n",i,j,k,array[i][j][k]);
            }
        }
    }
    array[1][1][1] = 10;
    array[2][1][2] = 10;
printf("-----------------------------------------------------------------------");
    for (i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
              printf("array[%d][%d][%d] = %d \n",i,j,k,array[i][j][k]);
            }
        }
    }

    return 0;
}