#include <stdio.h>
void taking_values_in_array(int *j);
void printArray(int *ptr);

void printArray(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *ptr);
    ptr++;}
}

int main()
{
    int i;
    int arr[10], *j;
    j = arr;
    taking_values_in_array(arr);
    printArray(arr);
    return 0;
}

void taking_values_in_array(int *j)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value for position (%d) -- ", i);
        scanf("%d", &(*j));
        j++;
    }
}