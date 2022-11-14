#include <stdio.h>
void comp(int arr[4][4],int arr1[4][4]);
int main()
{
    int grid[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int a_grid[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};

    comp(grid, a_grid);

    return 0;
}
void comp(int arr[4][4],int arr1[4][4])
{
    int i, j;

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (arr[i][j] == arr1[i][j])
            {
                if (i==3&&j==3)
                {
                    printf("same");
                }

                continue;
            }
            else
            {
                printf("nnnnnnnnnnnnnnnn\n");
                i = 4;
                j = 4;
            }
        }
    }
}