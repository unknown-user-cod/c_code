#include <stdio.h>

void print_array(int arr[10]);
void checking_for_negative_values_in_array(int array[10]);
void taking_values_in_array(int array[10]);


void checking_for_negative_values_in_array(int array[10])
{
    int i=1, j;

      for (j=0; j < 10; j++)
        {
            if (array[j] < 0)
            {
               printf("(%d) Negative number at (%d) position -- %d \n",i,j+1,array[j]);
               i++;
            }
        }
    
    
}

void taking_values_in_array(int array[10])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter value for position (%d) -- ", i+1);
        scanf("%d",&array[i]);
    }
    print_array(array);
    checking_for_negative_values_in_array(array);
    //print_array(array);
}

void print_array(int arr[10])
{
    int i;
    printf("Array -- ");
    printf("|");
    for (i = 0; i < 10; i++)
    {
        printf("%d |", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10];
    taking_values_in_array(arr);
    
return 0;
}