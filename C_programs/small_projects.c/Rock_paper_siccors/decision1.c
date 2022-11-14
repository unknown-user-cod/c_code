#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int random_value();

int main()
{

    int userinput;
    int user_win = 0, comp_win = 0, tie = 0, a ;

    while (1)
    {

        printf("--");
        a=random_value();
        userinput = getch();
        //a= getch();
        printf("%d", userinput);
        if (userinput==101)
        {
            break;
        }
        else if (userinput==69)
        {
            break;
        }

        switch (userinput)
        {
        case 115:
        case 83:
            if (a == 1)
            {
                printf("userwin\n");
               
                ++user_win;
            }
            else if (a == 2)
            {
                printf("tie\n");
                
                ++tie;
            }
            else if (a == 0)

            {
                printf("computer win\n");
                
                ++comp_win;
            }

            break;
        case 112:
        case 80:
            if (a == 1)
            {
                printf("tie\n");
                
                ++tie;
            }
            else if (a == 2)
            {
                printf("computer win\n");
                printf("%d", a);
                ++comp_win;
            }
            else if (a == 0)

            {
                printf("userwin\n");
                
                ++user_win;
            }

            break;
        case 114:
        case 82:
            if (a == 1)
            {
                printf("computer win\n");
                
                ++comp_win;
            }
            else if (a == 2)
            {
                printf("userwin\n");
                
                ++user_win;
            }
            else if (a == 0)

            {
                printf("tie\n");
                
                ++tie;
            }

            break;

        default:
            break;
        }
    }

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