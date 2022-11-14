#include <stdio.h>

void taking_values_in_array(int array[10]);
void checking_for_duplicate_values_in_array(int array[10]);
void print_array(int arr[10]);

void checking_for_duplicate_values_in_array(int array[10])
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (array[i] == array[j])
            {
                array[j] = '\0';
            }
        }
    }
    print_array(array);
}

void print_array(int arr[10])
{
    int i;
    printf("Array -- ");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void taking_values_in_array(int array[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value for position (%d) -- ", i);
        scanf("%d",&array[i]);
    }
    print_array(array);
    checking_for_duplicate_values_in_array(array);
    //print_array(array);
}

int main()
{
    int array[10]={1,2,3,4,5,6,6,1,7,8};
    taking_values_in_array(array);
    //print_array(array);
    //checking_for_duplicate_values_in_array(array);
    return 0;
}