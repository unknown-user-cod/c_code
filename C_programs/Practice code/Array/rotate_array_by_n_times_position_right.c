#include <stdio.h>

void taking_values_in_array(int *arr);
void rotate_array_by_n_position(int *array,int n);
void print_array(int arr[10]);

void rotate_array_by_n_position(int *array, int n)
{
    int j,i, a;
    for (size_t i = 0; i < n; i++)
    {
        a = *(array + 9);
        for (j = 9; j > 0; j--)
        {
            *(array + j) = *((array + j) - 1);
        }
        *array = a;
    }
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
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},n;
    //taking_values_in_array(array);
    print_array(array);
    printf("type number of times you want an array to be rotated -- ");
    scanf("%d",&n);
    rotate_array_by_n_position(array,n);
    print_array(array);

    return 0;
}