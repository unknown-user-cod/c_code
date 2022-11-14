#include <stdio.h>

void sorting(int *j);
void taking_values_in_array(int array[10]);
void print_array(int arr[10]);
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

void sorting(int *j)
{
    int i=1;
    int a;
    for (i ; i < 10;i++ )
    {
        if (*(j + i) < *((j+i)-1))
        {
            a = *(j + i);
            *(j + i) = *((j+i)-1) ;
            *((j+i)-1) = a;
            i=i-2;
        }
        else
        {
            //i++;
            continue;
        }
    }
}

void taking_values_in_array(int *array)
{
    int i;
    for (i = 0; i < 10; i++, array++)
    {
        printf("Enter value for position (%d) -- ", i);
        scanf("%d", &(*array));
    }
}

int main()
{
    int array[10]={11,10,8,77,6,5,44,3,22,22};
    //taking_values_in_array(array);
    print_array(array);
    sorting(array);
    print_array(array);
    return 0;
}