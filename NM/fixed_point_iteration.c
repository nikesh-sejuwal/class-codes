#include <stdio.h>
#include <math.h>

#define E 0.000000001

int main()
{
  int i = 0;
  float x0, x1;

  printf("Enter an initial guess: ");
  scanf("%f", &x0);

  do
  {
    x1 = 7 / x0;
    i++;

    if (i >= 100)
    {
      break;
    }
  } while (fabs(x1 - x0) > E);

  i = 0;

  x0 = x1;
  x1 = (7 / x0 + x0) / 2;

  while (fabs(x1 - x0) > E)
  {
    i++;
    x0 = x1;
    x1 = (7 / x0 + x0) / 2;
  }

  printf("Total iterations: %d\n", i);
  printf("The root of the equation is: %f\n", x1);

  return 0;
}
