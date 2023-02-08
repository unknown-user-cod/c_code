#include <stdio.h>
void input_frm_user();//

int number = 0, answer;

void input_frm_user()// deffining function
{
    printf("\nANSWER - ");
    scanf("%d", &answer);
} 


int main()
{
    // Introduction for game
    printf("\n");
    printf("Guess a number between 1 t 30. \n");
    printf("If card holds your number \n,then press 1 if not then press 2");
    printf("\n");

    // Prints card 1
    printf("----------\n");
    printf("CARD--1\n");
    printf("----------\n");
    printf("1   3   5\n7   9   11\n13  15  17\n19  21  23\n25  27  29 ");
    printf("\n----------");
    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 1 to number if not then doesn't
    {
    case 1:
        number = number + 1;

        // print card 2
        printf("----------\n");
        printf("CARD--2\n");
        printf("----------\n");
        printf("2   3   6\n7   10  11\n14  15  18\n19  22  23\n26  27  30 ");
        printf("\n----------");

        break;
    case 2:

        printf("----------\n");
        printf("CARD--2\n");
        printf("----------\n");
        printf("2   3   6\n7   10  11\n14  15  18\n19  22  23\n26  27  30 ");
        printf("\n----------");

        break;
    }
    // printf("\nANSWER - ");
    // scanf("%d", &answer);

    input_frm_user(); // calling the function
    switch (answer)
    {
    case 1:
        number = number + 2;

        // print card 3
        printf("----------\n");
        printf("CARD--3\n");
        printf("----------\n");
        printf("4   5   6\n7   12  13\n14  15  20\n21  22  23\n28  29  30 ");
        printf("\n----------");
        break;
    case 2:
        // print card 3
        printf("----------\n");
        printf("CARD--3\n");
        printf("----------\n");
        printf("4   5   6\n7   12  13\n14  15  20\n21  22  23\n28  29  30 ");
        printf("\n----------");

        break;
    }

    // printf("\nANSWER - ");
    // scanf("%d", &answer);
    input_frm_user();
    switch (answer)
    {
    case 1:
        number = number + 4;
        // print card 4
        printf("----------\n");
        printf("CARD--4\n");
        printf("----------\n");
        printf("8   9   10\n11  12   13\n14  15  24\n25  26  27\n28  29  30");
        printf("\n----------");
        break;
    case 2:
        // print card 4
        printf("----------\n");
        printf("CARD--4\n");
        printf("----------\n");
        printf("8   9   10\n11  12   13\n14  15  24\n25  26  27\n28  29  30");
        printf("\n----------");

        break;
    }

    input_frm_user();
    switch (answer)
    {
    case 1:
        number = number + 8;
        // print card 5

        printf("----------\n");
        printf("CARD--5\n");
        printf("----------\n");
        printf("16   17  18\n19  20  21\n22  23  24\n25  26  27\n28  29  30");
        printf("\n----------");
        break;

    case 2:
        // print card 5

        printf("----------\n");
        printf("CARD--5\n");
        printf("----------\n");
        printf("16   17  18\n19  20  21\n22  23  24\n25  26  27\n28  29  30");
        printf("\n----------");

        break;
    }

    input_frm_user();
    switch (answer)
    {

    case 1:
        number = number + 16;
        break;

    case 2:
        printf("");
        break;
    }

    printf("Guessed number %d", number); // print the number

    return 0;
}

// writing function logic
/*
void input_frm_user()
{
    printf("\nANSWER - ");
    scanf("%d", &answer);
}
*/
