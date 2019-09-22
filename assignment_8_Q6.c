#include <stdio.h>

int main()
{
  int i, n, number, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    sum += number / 100 * 100 + number % 100 / 10 + number % 10 * 10;
  }
  printf("Sum of numbers after exchanging last two digits: %d\n", sum);

  return 0;
}