#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num,j,i,arr[4][4];
    time_t t1;
    printf("Enter a number to set the limit for a random value \n");
    scanf("%d", &num);

    srand((unsigned)time(&t1));
    printf("\n");

    // for (size_t i = 0; i < num; i++)
    // {       for (size_t j = 0; j < count; j++)
    
    // }
    
    
        printf("%d\n", rand() % 16);
    

    return 0;
}