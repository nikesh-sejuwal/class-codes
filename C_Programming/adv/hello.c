#include <stdio.h>

void main()
{
  int sum = 0, k = 1, n;
  printf("Enter the number to check \n");
  scanf("%d", &n);
  do
  {
    if (n % k == 0)
    {
      sum = sum + k;
      k++;
    }
  } while (k <= n / 2);

  if (sum == n)
  {
    printf("%d is the perfect number", n);
  }
  else
    printf("%d is not the perfect number", n);
}