#include <stdio.h>
int triangular_series(int i);

int main()
{
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    printf(" %d ", triangular_series(i));
}
int triangular_series(int i)
{

  return (i * (i + 1) / 2);
}