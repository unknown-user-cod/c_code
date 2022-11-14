#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void body();
void name(char u[10]);
void instruction();
void swaping(int arr[4][4]);
void compare(int arr[4][4], int arr1[4][4]);
void random_value(int arr[4][4]);

int main()
{
    char user[10];
    int user_grid[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 15, 13, 12, 14, 0};
    int grid[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0};

    name(user);
    instruction();
    swaping(user_grid);
    printf("%s", user);
    compare(grid, user_grid);
    getch();

    return 0;
}

void body()
{
    int puzzle[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0}, i, j;
    for (size_t i = 0; i < 4; i++)
    {
        if (i == 0)
        {
            printf("-----------------------\n");
        }
        printf("|");
        for (size_t j = 0; j < 4; j++)
        {
            if (puzzle[i][j] < 10)
            {
                printf("  %d |", puzzle[i][j]);
            }
            else
            {
                printf(" %d|", puzzle[i][j]);
            }
        }
        printf("\n");

        if (i == 3)
        {
            printf("----------------------\n");
        }
    }
}

void instruction()
{
    printf("           MATXIX PUZZLE  \n\n");
    printf("RULES OF THIS GAMES ----->       \n\n");
    printf("1.You can move only 1 step at a time by arrow key \n\n");
    printf("          Move  UP   : by   UP   arrow key \n");
    printf("          Move DOWN  : by  DOWN  arrow key \n");
    printf("          Move LEFT  : by  LEFT  arrow key \n");
    printf("          Move RIGHT : by  RIGHT arrow key \n\n");
    printf("2. You can move number only to an empty position \n");

    printf("3. For each valid move : You will loose one move  \n");
    printf("4. Desired situation : You have to match a 4*4 matrix given below  \n ");

    printf("\nDESIRED SITUATION:--------------->\n");
    body();
}

void name(char u[10])
{
    char user_name[10];
    printf("Enter your name - ");
    fgets(u, 10, stdin);
}

void swaping(int arr[4][4])

{
    int user_input;
    int a = 0, b = 0, v = 0, moves_left = 50;
    int X = 3, Y = 3;
    // int grid_a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    for (size_t a = 0; a < 4; a++)
    {
        if (a == 0)
        {
            printf("------------------------\n");
        }
        printf("|");
        for (size_t b = 0; b < 4; b++)
        {
            if (arr[a][b] < 10)
            {
                printf("  %d |", arr[a][b]);
            }
            else
            {
                printf(" %d |", arr[a][b]);
            }
        }
        printf("\n");

        if (a == 3)
        {
            printf("------------------------\n");
        }
    }
    printf("                                             TOTAL_MOVES ----> %d \n", moves_left);
    while (moves_left > 0)

    {
        printf("Enter a number ------> ");
        // scanf("%d", &user_input);
        user_input = getch();
        printf("                                             moves_left ----> %d \n", moves_left - 1);

        switch (user_input)
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
                Y--;
                --moves_left;
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
                Y++;
                --moves_left;
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

                X--;
                --moves_left;
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
                X++;
                --moves_left;

                break;
            }
        default:
            break;
        }

        for (size_t a = 0; a < 4; a++)
        {
            if (a == 0)
            {
                printf("-----------------------\n");
            }
            printf("|");
            for (size_t b = 0; b < 4; b++)
            {
                if (arr[a][b] < 10)
                {
                    printf("  %d |", arr[a][b]);
                }
                else
                {
                    printf(" %d |", arr[a][b]);
                }
            }
            printf("\n");

            if (a == 3)
            {
                printf("------------------------\n");
            }
        }
    }
}

void compare(int arr[4][4], int arr1[4][4])
{
    int i, j;

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            if (arr[i][j] == arr1[i][j])
            {
                if (i == 3 && j == 3)
                {
                    printf("YOU WON");
                }

                continue;
            }
            else
            {
                printf("YOU LOOSE\n");
                i = 4;
                j = 4;
            }
        }
    }
}

void random_value(int arr[4][4])
{
    int num, i;
    time_t t1;
    printf("Enter a number to set the limit for a random value \n");
    scanf("%d", &num);

    srand((unsigned)time(&t1));
    printf("\n");

    for (size_t i = 0; i < num; i++)
    {
        printf("%d\n", rand() % 16);
    }
}