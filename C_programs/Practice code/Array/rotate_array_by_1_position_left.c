#include <stdio.h>

void taking_values_in_array(int *arr);
void rotate_array_by_1_position(int *array);
void print_array(int arr[10]);

void rotate_array_by_1_position(int *array)
{
    int max, j,a;
 a=*array;

    for (j = 0; j < 10; j++)
    {
        if (j > 0)
        {
            
            *((array+j)-1)=*(array+j);
        }
        else
        {
          continue;
        }
    }
    *(array+9)=a;
     
}

void print_array(int arr[10])
{
    int i;
    printf("\nArray -- ");
    for (i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
}

void taking_values_in_array(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value for position (%d) -- ", i);
        scanf("%d", &(*arr));
        arr++;
    }
}

int main()
{
    int array[10] /*= {1, 2, 3, 4, 5, 6, 6, 1, 7, 8}*/;
    taking_values_in_array(array);
    print_array(array);
    rotate_array_by_1_position(array);
    print_array(array);
    
    return 0;
}