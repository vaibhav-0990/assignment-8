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
    if (!number & 1))
    {
      sum += number * (i+1);
    }
  }
  printf("Weighted sum of even numbers: %d\n", sum);

  return 0;
}