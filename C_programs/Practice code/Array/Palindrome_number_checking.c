#include <stdio.h>

void taking_values_in_array(int array[5]);
void checking_for_duplicate_values_in_array(int array[5]);
void print_array(int arr[5]);

void taking_values_in_array(int array[5])
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter (%d) digit -- ", i + 1);
        scanf("%d", &array[i]);
    }
    checking_for_duplicate_values_in_array(array);
    
}

void checking_for_duplicate_values_in_array(int array[5])
{
    int i, j;
    
            if (array[0] == array[4])
            {
                if (array[1] == array[3])
                {
                    printf("It's a Palindrome number");
                }
                else
                printf("It's not a Palindrome number");
                
            }
            else
                printf("It's not a Palindrome number");
printf("\n");
    print_array(array);
}

void print_array(int arr[5])
{
    int i;
    printf("Array -- ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[5];
    printf("Enter 5-digit number - \n");
    taking_values_in_array(arr);

    return 0;
}