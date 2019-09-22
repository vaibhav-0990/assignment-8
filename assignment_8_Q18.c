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
    if (!(number & 1))
    {
      flag = 0;
    }
    if (flag == 0)
    {
      sum += number;
    }
  }
  printf("Sum of numbers from 1st even number: %d", sum);
  return 0;
}