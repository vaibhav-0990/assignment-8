#include <stdio.h>

int main()
{
  int i, n, number, sum = 0, flag = -1;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (flag == 0)
    {
      sum += number;
    }
    if (!(number & 1))
    {
      flag = 0;
    }
  }
  printf("Sum of numbers after 1st even number: %d\n", sum);
  return 0;
}