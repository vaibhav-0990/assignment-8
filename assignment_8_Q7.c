#include <stdio.h>

int main()
{
  int i, n, number, last_even = -1;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (!(number & 1))
    {
      last_even = number;
    }
  }
  printf("Last even number: %d\n", last_even);

  return 0;
}