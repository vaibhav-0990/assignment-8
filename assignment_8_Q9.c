#include <stdio.h>

int main()
{
  int i, n, number, odd_sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (number & 1)
    {
      odd_sum += number;
    }
  }
  printf("Sum of odd numbers: %d\n", odd_sum);

  return 0;
}