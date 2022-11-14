#include <stdio.h>
#include <ctype.h>
int main()
{
    char letter;
    printf("-- ");
    scanf("%c",&letter);

    if (letter==tolower(letter ))
    {
        printf("abc");
    }
    else
    {
        printf("ABC");
    }

    return 0;
}