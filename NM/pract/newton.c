#include <stdio.h>
#include <math.h>
#define E 0.000001

int main()
{
  int i = 0;
  float x0, x1, f0, f1, fd;
a:
  printf("Enter the initial guess: ");
  scanf("%f", &x0);
  f0 = x0 * x0 - 4 * x0 - 10;
  fd = 2 * x0 - 4;
  if (fd == 0)
  {
    goto a;
  }
b:
  x1 = x0 - f0 / fd;
  f1 = x1 * x1 - 4 * x1 - 10;
  i++;
  if ((fabs(x1 - x0) / x1) > E)
  {
    x0 = x1;
    f0 = f1;
    goto b;
  }
  printf("The root is: %f", x1);
  printf("\n%d", i);
}