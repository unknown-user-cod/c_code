#include <stdio.h>
#include <conio.h>

void swap(int arr[4][4]);
int main()
{
    // int user_input, i = 3, j = 3, a1 = 0, b1 = 0;
    int a = 0, b1 = 0;
    int grid_a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0};
    swap(grid_a);
    // for (size_t a = 0; a < 4; a++)
    //     {
    //         if (a == 0)
    //         {
    //             printf("------------------\n");
    //         }
    //         printf("|");
    //         for (size_t b1 = 0; b1 < 4; b1++)
    //         {

    //             printf(" %d |", grid_a[a][b1]);
    //         }
    //         //printf("\n");

    //         if (a == 3)
    //         {
    //             printf("------------------\n");
    //         }
    //     }
}
void swap(int arr[4][4])
{
    int user_input, a = 0, b = 0, v = 0;
    int X = 3, Y = 3;
    // int grid_a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    for (; user_input != 'e';)

    {
        printf("Enter a number ------> ");
        switch ((user_input = getch()))
        {
        case 72:
            if (Y == 0)
            {
                break;
            }
            else
            {
                v = arr[Y][X];
                arr[Y][X] = arr[Y - 1][X];
                arr[Y - 1][X] = v;
                Y = Y - 1;
                break;
            }
        case 80:
            if (Y == 3)
            {
                break;
            }
            else
            {
                v = arr[Y + 1][X];
                arr[Y + 1][X] = arr[Y][X];
                arr[Y][X] = v;
                Y = Y + 1;
                break;
            }

        case 75:
            if (X == 0)
            {
                break;
            }
            else
            {
                v = arr[Y][X - 1];
                arr[Y][X - 1] = arr[Y][X];
                arr[Y][X] = v;

                X = X - 1;
                break;
            }

        case 77:
            if (X == 3)
            {
                break;
            }
            else
            {
                v = arr[Y][X + 1];
                arr[Y][X + 1] = arr[Y][X];
                arr[Y][X] = v;
                X = X + 1;

                break;
            }
            default:
            break;
        }
        for (size_t a = 0; a < 4; a++)
        {
            if (a == 0)
            {
                printf("------------------\n");
            }
            printf("|");
            for (size_t b = 0; b < 4; b++)
            {

                printf(" %d |", arr[a][b]);
            }
            printf("\n");

            if (a == 3)
            {
                printf("------------------\n");
            }
        }
    }
}