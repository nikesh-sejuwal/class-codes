#include <stdio.h>
#include <math.h>

#define E 0.0001

float f(float x)
{
  return x * x - 4 * x - 10;
}

int main()
{
  int i = 0;
  float x0, x1, x2, f0, f1, f2;

  printf("Enter two initial guesses: ");
  scanf("%f %f", &x0, &x1);

  f0 = f(x0);
  f1 = f(x1);

a:
  x2 = x1 - ((x1 - x0) / (f1 - f0)) * f1;
  f2 = f(x2);

  if (fabs(x2 - x1) > E)
  {
    x0 = x1;
    f0 = f1;
    x1 = x2;
    f1 = f2;
    i++;
    goto a;
  }

  printf("Total Iteration: %d\n", i);
  printf("The root of the equation: %f\n", x2);

  return 0;
}
