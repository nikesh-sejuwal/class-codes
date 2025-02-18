#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x, y) (x * x + y)

int main()
{
  float x, y, x0, y0, xp, h, m1, m2;
  printf("Enter the initial values of x and y : ");
  scanf("%f%f", &x0, &y0);
  printf("Enter the values at which functional value is required: ");
  scanf("%f", &xp);
  printf("\nEnter the step size: ");
  scanf("%f", &h);

  x = x0;
  y = y0;

  for (x = x0; x < xp; x = x + h)
  {
    m1 = f(x, y);
    m2 = f((x + h), (y + (m1 * h)));
    y = y + (h / 2) * (m1 + m2);
  }
  printf("\nThe values of y at x= %f is : %f", xp, y);
  getch();
  return 0;
}