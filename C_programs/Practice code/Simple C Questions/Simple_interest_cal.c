#include <stdio.h>

int main()
{
  int p, n;
  float r, si;

  printf("Enter values of p, n, r \n");
  scanf("%d %d %f \n", &p, &n, &r);

  si = p * n * r / 100; // formula

  printf("si %f", si);

  return 0;
}
