#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) (x) * (x) + (x) + 1

int main()
{
  int i, k = 3;
  float a, h, x0, x1, x2, xn, fx0, fx1, fx2, fxn, v;
  printf("Enter the lower and upper limit: \n");
  scanf("%f%f", &x0, &xn);

  h = (xn - x0) / k;
  x1 = x0 + h;
  x2 = x0 + 2 * h;
  fx0 = f(x0);
  fx1 = f(x1);
  fx2 = f(x2);
  fxn = f(xn);

  v = 3 / 8.0 * h * (fx0 + 3 * fx1 + 3 * fx2 + fxn);
  printf("value of integration = %f\n", v);
  getch();
  return 0;
}