#include <stdio.h>
/*
card 1 - 1
card 2 - 2
card 3 - 4
card 4 - 8
card 5 - 16
card 6 - 32
*/
int main()
{
    int number = 0, answer;

    // Introduction for game
    printf("\n");
    printf("Guess a number between 1 t 63. \n");
    printf("If card holds your number \n,then press 1 if not then press 2");
    printf("\n");

    // Prints card 1
    printf("----------\n");
    printf("CARD--1\n");
    printf("----------\n");
    printf("1   3   5   7\n9   11  13  15\n17  19  21  23\n25  27  29  31\n33  35  37  39\n41  43  45  47\n49  51  53  55\n57  59  61  63  ");
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
        printf("2   3   6   7\n10  11  14  15\n18  19  22  23\n26  27  30  31\n34  35  38  39\n42  43  46  47\n50  51  54  55\n58  59  62  63  ");
        printf("\n----------");

        break;

    case 2:

        printf("----------\n");
        printf("CARD--2\n");
        printf("----------\n");
        printf("2   3   6   7\n10  11  14  15\n18  19  22  23\n26  27  30  31\n34  35  38  39\n42  43  46  47\n50  51  54  55\n58  59  62  63  ");
        printf("\n----------");

        break;
    }
    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 2 to number if not then doesn't
    {
    case 1:
        number = number + 2;

        // print card 3
        printf("----------\n");
        printf("CARD--3\n");
        printf("----------\n");
        printf("4   5   6   7\n12  13  14  15\n20  21  22  23\n28  29  30  31\n36  37  38  39\n44  45  46  47\n52  53  54  55\n60  61  62  63  ");
        printf("\n----------");
        break;

    case 2:
        // print card 3
        printf("----------\n");
        printf("CARD--3\n");
        printf("----------\n");
        printf("4   5   6   7\n12  13  14  15\n20  21  22  23\n28  29  30  31\n36  37  38  39\n44  45  46  47\n52  53  54  55\n60  61  62  63  ");
        printf("\n----------");

        break;
    }

    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 4 to number if not then doesn't
    {
    case 1:
        number = number + 4;
        // print card 4
        printf("----------\n");
        printf("CARD--4\n");
        printf("----------\n");
        printf("8   9   10  11\n9   11  13  15\n24  25  26  27\n28  29  30  31\n40  41  42  43\n44  45  46  47\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");

        break;
    case 2:
        // print card 4
        printf("----------\n");
        printf("CARD--4\n");
        printf("----------\n");
        printf("8   9   10  11\n9   11  13  15\n24  25  26  27\n28  29  30  31\n40  41  42  43\n44  45  46  47\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");

        break;
    }

    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 16 to number if not then doesn't
    {
    case 1:
        number = number + 8;
        // print card 5
        printf("----------\n");
        printf("CARD--5\n");
        printf("----------\n");
        printf("16  17  18  19\n20  21  22  23\n24  25  26  27\n28  29  30  31\n48  49  50  51\n52  53  54  55\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");
        break;
    case 2:
        // print card 5
        printf("----------\n");
        printf("CARD--5\n");
        printf("----------\n");
        printf("16  17  18  19\n20  21  22  23\n24  25  26  27\n28  29  30  31\n48  49  50  51\n52  53  54  55\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");

        break;
    }

    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 16 to number if not then doesn't
    {
    case 1:
        number = number + 16;
        // print card 6

        printf("----------\n");
        printf("CARD--6\n");
        printf("----------\n");
        printf("32  33  34  35\n36  37  38  39\n40  41  42  43\n44  45  46  47\n48  49  50  51\n52  53  54  55\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");
        break;

    case 2:
        // print card 6

        printf("----------\n");
        printf("CARD--6\n");
        printf("----------\n");
        printf("32  33  34  35\n36  37  38  39\n40  41  42  43\n44  45  46  47\n48  49  50  51\n52  53  54  55\n56  57  58  59\n60  61  62  63  ");
        printf("\n----------");
        break;
    }

    printf("\nANSWER - ");
    scanf("%d", &answer);

    switch (answer) // check the answer,if true add 32 to number if not then doesn't
    {

    case 1:
        number = number + 32;
        break;

    case 2:
        printf("");
        break;
    }

    printf("Guessed number %d", number); // print the number

    return 0;
}