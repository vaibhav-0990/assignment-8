#include <stdio.h>

int main()
{
  int i, n, number, counter=0, sum = 0;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (number & 1)
    {
      sum += number;
      counter += 1;
    }
  }
  printf("Average of odd numbers: %d\n", sum/counter);
  return 0;
}