#include <stdio.h>

int main()
{
  int i, n, number, weight = 0;
  float sum = 0, ans;
  printf("Enter value of n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
  for(i=0; i<n; i++)
  {
    scanf("%d", &number);
    if (!(number & 1))
    {
      sum += number * (i+1);
      weight += (i+1);
    }
  }
  ans = sum/weight;
  printf("Weighted average of even numbers: %f\n", ans);

  return 0;
}