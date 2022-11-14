/*
(b) Write a program to pick up the largest number from any 5 row
by 5 column matrix.
*/
#include <stdio.h>


void print_array(int arr[5][5])
{
    int i,j;
    printf("Array -- ");
    for (i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        printf("\n");}  
    }
    
}

void taking_values_in_array(int (*j)[5])
{
    int i;
    for (i = 0; i < 10; i++)
    {
       
            printf("Enter value for position (%d) -- ", i);
            scanf("%d", &(*j));
        }
    
}

int main()
{
    int array[5][5];
    taking_values_in_array(array);
    print_array(array);

    return 0;
}