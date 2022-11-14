#include <stdio.h>
void taking_values_in_array(int *j);
int sum_array(int arr[10]);
void printArray(int *ptr);
int recursion_sum_array(int arr[10],int n);

void printArray(int *ptr)
{
    for (int i = 0; i < 10; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *ptr);
        ptr++;
    }
}

int main()
{
    int sum, r_sum;
    int arr[10], *j;
    j = arr;
    taking_values_in_array(arr);
    printArray(arr);

    sum = sum_array(arr);
    printf("%d\n", sum);

    r_sum = recursion_sum_array(arr,10);
    printf("%d\n", r_sum);

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

int sum_array(int arr[10])
{
    int i, sum = 0;
    for (size_t i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}
int recursion_sum_array(int arr[10],int n)
{
    if (n==0)
    {
     return 0;   /* code */
    }
    return arr[n] + recursion_sum_array(arr,n--);
    
}