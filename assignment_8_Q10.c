#include <stdio.h>

int main()
{
  int i, n, number, counter=0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (number & 1)
    {
      counter += 1;
    }
  }
  printf("Number of odd numbers: %d\n", counter);
  return 0;
}