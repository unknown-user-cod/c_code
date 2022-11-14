// Maximum and minimum between two numbers using functions.

int min_max(int a, int b)
{
    if (a < b)
    {
        return b;
    }
    else
        return a;
}

#include <stdio.h>

int main()
{
    int num1, num2, min, max;
    printf("Enter two numbers --");
    scanf("%d %d", &num1, &num2);
    min=num1+num2;
    max=min_max(num1,num2);
    min=min-max;

    printf("MAX - %d\n",max);
    printf("MIN - %d",min);
    return 0;
}