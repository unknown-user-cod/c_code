#include <stdio.h>

void sorting(int *j);
void taking_values_in_array(int array[10]);
void print_array(int arr[10]);
void counting_distinct_elements_in_array(int array[10]);

void counting_distinct_elements_in_array(int array[10])
{
    int i,j=1;
    for ( i = 1; i <= 10; i++)
    {
        if (array[i-1]==array[i])
        {
            j++;
        }
        // if (i==9)
        // {
        //     printf("%d value present in array %d times \n",array[i-1],j);
        //     j=1;
        // }
        
        else 
        {
            printf("%d value present in array %d times \n",array[i-1],j);
            j=1;
        }   
    }
    
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

void sorting(int *j)
{
    int i;
    int a;
    for (i=1 ; i < 10;i++ )
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
    int array[10]={1,1,1,1,1,1,1,1,1,1};
    //taking_values_in_array(array);
    //print_array(array);
    sorting(array);
    counting_distinct_elements_in_array(array);
    print_array(array);
    return 0;
}