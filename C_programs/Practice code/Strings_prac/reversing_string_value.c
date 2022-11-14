#include <stdio.h>
#include <conio.h>
int count_string_value(char string[100]);
void reversing_string_value(char srting[100], int length);
void p_reversing_string_value(char *srting, int length);

void p_reversing_string_value(char *string, int length)
{
    int i = length - 1, j = 0;
    char a;
    printf("\n");
    while (j <= i / 2)
    {
        //(string + j);

        a = *(string + j);
        *(string + j) = *((string) + i - j);
        *((string + i) - j) = a;
        j++;
    }
}

void reversing_string_value(char srting[100], int length)
{
    int i = length - 1;
    printf("\n");
    for (; i >= 0; i--)
    {
        printf("%c", srting[i]);
    }
}

int count_string_value(char string[100])
{
    int i;
    printf("Enter string -- ");
    fgets(string, 100, stdin);
    for (size_t i = 0; i < 100; i++)
    {
        if (string[i] == 0) // --\0
        {
            printf("Length of string is %d", i - 1);
            return i - 1;
            break;
        }
    }
}

int main()
{
    char string[100];
    int length;
    length = count_string_value(string);
    // printf("%d",length);
    p_reversing_string_value(string, length);
    // fputs(string,100,stdin);
    printf("%s", string);
    return 0;
}