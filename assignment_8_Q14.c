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
    int a = number % 100 / 10;
    int b = number % 10;
    sum += number / 100 * 100 + (a < b ? a*10 + b : b*10 + a);
  }
  printf("Sum of numbers after sorting the last two digits: %d\n", sum);

  return 0;
}