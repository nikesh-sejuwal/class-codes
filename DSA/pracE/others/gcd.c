#include <stdio.h>
#include <conio.h>

int gcd(int a, int b)
{
  if (b == 0)
  {
    return a;
  }
  else
    return gcd(b, a%b);
}

int main()
{
  int c, d;
  printf("enter the 2 number whose gcd have to calcuate: ");
  scanf("%d %d", &c, &d);
  // int res = gcd(c, d);
  printf("the gcd of %d and %d is = %d", c, d, gcd(c, d));
}