#include <stdio.h>
#include <conio.h>

#include <math.h>

#define E 0.00001

int main()
{
  int i = 0;
  float x, x1, x2, f, f1, f2;
a:
  printf("Enter 2 initial guesses: ");
  scanf("%f%f", &x1, &x2);
  f1 = x1 * x1 - 4 * x1 - 10;
  f2 = x2 * x2 - 4 * x2 - 10;
  if ((f1 * f2) > 0)
  {
    printf("Guesses don't bracket them.");
    goto a;
  }
b:
  x = (x1 + x2) / 2;
  f = x * x - 4 * x - 10;
  if ((f * f1) < 0)
  {
    x2 = x;
    f2 = f;
  }
  else
  {
    x1 = x;
    f1 = f;
  }
  if (fabs(x1 - x2) > E)
  {
    i++;
    goto b;
  }
  printf("The root is %f\n", x);
  printf("Total iterations: %d", i);
}