#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

int random_value();
void input_checking();
void introduction();

int main()
{
    system("cls");
    input_checking();
    

    return 0;
}

void input_checking()
{
    int user_input, b,a;
    b = random_value();
    
    while(1)
    {
        //system("cls");
        printf("--");
        scanf("%d", &user_input);

        if (b > user_input)
        {
            system("cls");
            printf("%d is smaller than random number\n",user_input);
            
            continue;
        }
        else if (b < user_input)
        {
            system("cls");
            printf("%d is greater than random number\n",user_input);
            
            continue;
        }
        else
        {
            system("cls");
            printf("congralution !!!!! \n You guessed the random number\n");
            getch();
            break;
        }
        
    }
}

int random_value()
{
    int num, i;
    time_t t1;
    // printf("Enter a number to set the limit for a random value \n");
    srand((unsigned)time(&t1));
    i = rand() % 60;
}

void introduction()
{

}
