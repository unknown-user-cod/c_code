#include <stdio.h>

int main()
{
    int a;

    if (3 + 2 % 5)
        printf("This works \n"); //  non-zero number, hence true
    if (a = 10)
        printf("Even this works \n "); //  non-zero number, hence true
    if (-5)
        printf("Surprisingly even this works \n "); //  non-zero number, hence true

    /*
    Note that in C a non-zero value is considered to be true,
    whereas a 0 is considered to be false.
    In the first if, the expression evaluates to 5 and
    since 5 is non-zero it is considered to be true.
    Hence the printf( ) gets executed.
     */
    printf("enter a number between |1 - 10| - ");
    scanf ("%d",&a);
    if (a==2)
    {
        printf("a == 2");
    }
    else if (a==3)
    {
        printf("a == 3");
    }
    else
    {
        printf("a != 2&3");
    }


    return 0;
}