#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int random_value(int ab);

int main()
{

    char userinput;
    int user_win = 0, comp_win = 0, tie = 0, a = 2;

    while (1)
    {
        
        printf("--");
       
        userinput = getch();
        printf("%d",userinput);
       
        if ((userinput == 'r' || 'R') && (a == 0))
        {
            printf("tie\n");
            printf("%d", a);
            ++tie;
            
        }
        else if ((userinput == 'p' || 'P') && (a == 1))
        {
            printf("tie\n");
            printf("%d", a);
            ++tie;
            
        }
        else if ((userinput == 's' || 'S') && (a == 2))
        {
            printf("tie\n");
            printf("%d", a);
            ++tie;
            
        }

        else if ((userinput == 'r' || 'R') && (a == 2))
        {
            printf("userwin\n");
            printf("%d", a);
            ++user_win;
        }
        else if ((userinput == 'p' || 'P') && (a == 0))
        {
            printf("userwin\n");
            printf("%d", a);
            ++user_win;
            
        }
        else if ((userinput == 's' || 'S') && (a == 1))
        {
            printf("userwin\n");
            printf("%d", a);
            ++user_win;
            
        }
        else
        {
            printf("computer win\n");
            printf("%d", a);
            ++comp_win;
            
        }
    }

    return 0;
}

int random_value(int ab)
{

    int a1;
    time_t t1;
    srand((unsigned)time(&t1));
    a1 = rand() % 3;
    return a1;
}