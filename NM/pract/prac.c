// Heuns Method
#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x, y) (x * x + y * y)
int main()
{
  float x, x0, xp, y, y0, h, m1, m2, m3, m4;
  printf("Enter the value of X and Y: ");
  scanf("%f %f", &x0, &y0);
  printf("Enter the value of functional value: ");
  scanf("%f", &xp);
  printf("Enter the step size: ");
  scanf("%f", &h);

  x = x0;
  y = y0;

  for (x = x0; x < xp; x = x + h)
  {
    m1 = f(x, y);
    m2 = f((x + (h / 2)), (y + (m1 * (h / 2))));
    m3 = f((x + (h / 2)), (y + (m2 * (h / 2))));
    m4 = f((x + h), (y + (m3 * h)));
    y = y + (h / 6) * (m1 + 2 * m2 + 2 * m3 + m4);
  }
  printf("The value of Y at x = %f is %f", xp, y);
}