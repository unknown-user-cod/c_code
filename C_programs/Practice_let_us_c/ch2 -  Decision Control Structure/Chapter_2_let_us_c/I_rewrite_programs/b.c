
#include <stdio.h>
int main( )
{
    int code;
    scanf("%d", &code);
    if (code > 1)
        printf("\nJerusalem");
    else
    {
        if (code < 1)
            printf("\nEddie");
        else
            printf("\nC Brain");
    }
}