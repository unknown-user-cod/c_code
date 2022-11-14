#include <stdio.h> // it's a library for key words

int main(void)
{

    int a, b; // int is used to declare integers variables

    float i, j; // float is used to declare float variables

    char x, y; // char is used to declare char variables

    i = 8.0000; // first declare varible then use it
    j = 7;

    a = 2;
    b = 6;

    char d = '#'; // use only single quotes for char variable
    x = '%';
    y = '$';

    // %d is used for adding integers values
    printf("integer %d\n", a);
    printf("integer %d\n", b);

    // %f is used for adding float values
    printf("float %f\n", i);
    printf("float %f\n", j);

    // %c is used for adding char values
    printf("char %c \n", x);
    printf("char %c \n", y);

    // method to use multi variables at once
    printf(" %d %d %f %f %c %c \n ", b, a, i, j, y, x);

    int f, q, c, e;
    f = 1;
    q = 2;
    c = 3;
    e = a + b - a;

    // use to display different varible in new lines
    printf("%d \n %d \n %d \n %d \n %d", 3, 3 + 2, c, a + q * c + b, e);

    char z = 65;
    printf("%d", z);

    return 0;
}
