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
    sum += number % 100 / 10 * (number % 10);
    printf("%d\n", sum);
  }
  printf("Sum of product of last digits two digits: %d\n", sum);

  return 0;
}