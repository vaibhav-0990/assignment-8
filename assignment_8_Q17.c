#include <stdio.h>

int main()
{
  int i, n, number, prev, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (i > 0)
    {
      sum += prev * number;
    }
    prev = number;
  }
  printf("Sum of consecutive product of number: %d\n", sum);
  return 0;
}