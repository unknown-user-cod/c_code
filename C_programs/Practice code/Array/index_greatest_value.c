#include <stdio.h>

void taking_values_in_array(int *arr);
int index_of_greatest_value_in_array(int array[10]);
void print_array(int arr[10]);

int index_of_greatest_value_in_array(int array[10])
{
    int max, j;

    max = array[0];
    for (j = 1; j < 10; j++)
    {
        if (array[j] >= max)
        {
            max = array[j];
        }
        else
        {
          continue;
        }
    }
     for (j = 0; j < 10; j++)
    {
        if (array[j] == max)
        {
            break;
        }
        else
        {
          continue;
        }
    }
    return j;
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
    int array[10] /*= {1, 2, 3, 4, 5, 6, 6, 1, 7, 8}*/,index_of_greatest_value;
    taking_values_in_array(array);
    print_array(array);
    index_of_greatest_value= index_of_greatest_value_in_array(array);
    printf("\n                                     Note Index starts from 0");
    printf("\nIndex_of_greatest_value = %d",index_of_greatest_value);
   
    return 0;
}