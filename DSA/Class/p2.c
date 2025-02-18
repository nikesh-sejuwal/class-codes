#include <stdio.h>
int gcd(int x, int y)
{
  if (x == 0)
    return y;
  else
    return (gcd(y % x, x));
}
int main()
{
  int a, b;
  printf("enter");
  scanf("%d %d", &a, &b);
  printf("The GCD of %d and %d is %d", a, b, gcd(a, b));
}