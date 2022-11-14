#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int random_value();
void instruction(char n[10]);
void name(char u[10]);
void decision();
void score_board(int a, int b, int c, int d);

int main()
{
    int a;
    char user_name[10];
    name(user_name);
    printf("\nUSER --:-- %s\n", user_name);
    instruction(user_name);
    printf("Press any key to start game --");
    getch();
    system("cls");
    decision();
    return 0;
}

int random_value()
{

    int a;
    time_t t1;
    srand((unsigned)time(&t1));
    a = rand() % 3;
    return a;
}

void instruction(char n[10])
{
    char user_name[10];

    printf(" \n        Rock_paper_siccors             \n\n");

    printf("          R  --:-- Rock        \n");
    printf("          P  --:-- Paper       \n");
    printf("          S  --:-- Siccors     \n");
    printf("        COMP --:-- COMPUTER    \n");

    printf("RULES ------------------>");

    printf("1.");

    printf("2.");

    printf("3.");

    printf("4.");

    printf("5.");

    printf("6.\n");
}

void name(char u[10])
{
    char user_name[10];
    printf("Enter your name - ");
    fgets(u, 10, stdin);
}

void decision()
{
    int userinput;
    int user_win = 0, comp_win = 0, tie = 0, a, d;

    while (1)
    {
        system("cls");

        score_board(tie, user_win, comp_win, d);
        a = random_value();

        printf("--");
        userinput = getch();
        if (userinput == 101)
        {
            break;
        }
        else if (userinput == 69)
        {
            break;
        }

        switch (userinput)
        {
        case 115:
        case 83:
            if (a == 1)
            {
                d=0;
                ++user_win;
            }
            else if (a == 2)
            {
                d=1;
                ++tie;
            }
            else if (a == 0)

            {
                d=2;
                ++comp_win;
            }

            break;
        case 112:
        case 80:
            if (a == 1)
            {
                d=1;
                ++tie;
            }
            else if (a == 2)
            {
                d=2;
                ++comp_win;
            }
            else if (a == 0)

            {
                d=0;
                ++user_win;
            }

            break;
        case 114:
        case 82:
            if (a == 1)
            {
                d=2;
                ++comp_win;
            }
            else if (a == 2)
            {
                d=0;
                ++user_win;
            }
            else if (a == 0)

            {
                d=1;
                ++tie;
            }

            break;

        default:
            break;
        }
    }
}

void score_board(int a, int b, int c, int d)
{
    printf("                                        --------------------\n");
    printf("                                        | TIE | WIN | LOST |\n");
    printf("                                        --------------------\n");
    printf("                                        |  %d |  %d |  %d  |\n", a, b, c);
    printf("                                        --------------------\n");
    if (d == 1)
    {
        printf("Last match --:-- TIE");
    }
    else if (d == 0)
    {
        printf("Last match --:-- YOU WON");
    }
    else if (d == 2)
    {
        printf("Last match --:-- COMPUTER WON");
    }
    else{
        printf("  ");
    }
    printf("\n|R -:- Rock | P -:- Paper | S -:- Siccors| E -:- Exit\n");
}
