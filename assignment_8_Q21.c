#include <stdio.h>

int main()
{
  int i, n, number, sum = 0, flag = 0, counter = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (flag == 1 || counter == 2)
    {
      sum += number;
      flag = 1;
    }
    if (!(number & 1))
    {
      counter++;
    }
    else
    {
      counter = 0;
    }
  }
  printf("Sum of numbers after k even number: %d\n", sum);
  return 0;
}