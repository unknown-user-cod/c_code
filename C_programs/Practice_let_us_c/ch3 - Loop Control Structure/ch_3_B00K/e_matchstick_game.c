/*Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
− After the person picks, the computer does its
picking.
− Whoever is forced to pick up the last matchstick
loses the game. */

#include <stdio.h>
#include <conio.h>
void print_match_stick(int print_stick);
int main()
{
    int user_input, left_match_stick = 21, total_match_stick = 21, pick = 0, d = 7, print_sticks = 0;

    while (left_match_stick > 0)
    {
        printf("--");
        scanf("%d", &user_input);
        switch (left_match_stick)
        {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
         switch (user_input)
            {
            case 7:
                pick = left_match_stick - 1;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 6:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 5:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 4:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 3:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 2:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 1:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            }
        case 21:

            switch (user_input)
            {
            case 7:
                pick = left_match_stick - 1;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 6:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 5:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 4:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 3:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 2:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            case 1:
                pick = d - user_input;
                left_match_stick = total_match_stick - (user_input + pick);
                print_sticks = left_match_stick;
                print_match_stick(print_sticks);
                break;
            }

        case 7:
            print_sticks = 6;
            print_match_stick(print_sticks);
            break;
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:

            pick = left_match_stick - 1;
            left_match_stick = total_match_stick - (user_input + pick);
            print_sticks = left_match_stick;
            print_match_stick(print_sticks);

            break;
        case 0:
            left_match_stick = 0;
            break;
        case 1:
            left_match_stick = 0;
            printf("hiii");
            break;
        default:
            break;
        }
    }

    printf("YOU  loss  the game");
    return 0;
}
void print_match_stick(int print_stick)
{
    for (size_t i = 0; i < print_stick; i++)
    {
        printf("| ");
    }
}