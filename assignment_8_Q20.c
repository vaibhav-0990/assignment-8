#include <stdio.h>

int main()
{
  int i, n, number, sum = 0, counter = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter value of k: ");
  scanf("%d", &k);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (counter == k)
    {
      sum += number;
    }
    if (!(number & 1))
    {
      counter++;
    }
  }
  printf("Sum of numbers after k even number: %d\n", sum);
  return 0;
}