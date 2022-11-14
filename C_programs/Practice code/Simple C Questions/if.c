/*
x == y     x is equal to y
x != y     x is not equal to y
x < y      x is less than y
x > y      x is greater than y
x <= y     x is less than or equal to y
x >= y     x is greater than or equal to y
*/

#include <stdio.h>

int main()
{

    int num;

    printf("type a number -- ");
    scanf("%d", &num);
    
    if (num == 5)
    {
        printf("num=5");  /* code */
        
    }
    else if (num==4)
    {
        
        printf("num=4");  /* code */
    }
    else
    {
        printf("num is not equal to 5 and 4");   /* code */
        
    }
    
   

    return 0;
}