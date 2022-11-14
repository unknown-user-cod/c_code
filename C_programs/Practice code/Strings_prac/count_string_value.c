#include <stdio.h>
#include <conio.h>
int main()
{
    char string[100];
    printf("Enter string -- ");
    fgets(string,100,stdin);
    for (size_t i = 0; i < 100; i++)
    {
        if (string[i] == 0)// --\0
        {
            printf("Length of string is %d", i-1);
            break;
        }
    }

    return 0;
}