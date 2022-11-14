// Insert An Element Desired or Specific Position In An Array
#include <stdio.h>
void print_array(int arr[10])
{
  int i;
  printf("Array -- ");
  for (i = 0; i < 10; i++)
  {
    printf("%d ", arr[i]);
  }
}

int main()
{
  int index, variable, array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 11, 10};
  printf("Size of array is -- 10\n");

  print_array(array);

  printf("\nEnter position -- ");
  scanf("%d", &index);

 

  array[index] = 0;
  print_array(array);

  return 0;
}