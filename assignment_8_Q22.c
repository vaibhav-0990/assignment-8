#include <stdio.h>

int main()
{
  int i, n, number, sum = 0, counter = 0, idx = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if(i == idx)
    {
      sum += number;
      counter++;
      idx += counter;
    }
  }
  printf("Sum of 1st, 2nd, 4th, 7th ... numbers: %d\n", sum);
  return 0;
}