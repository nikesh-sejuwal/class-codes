#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x, y) (x * x + y * y)

int main()
{
  float x, y, x0, y0, xp, h;
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
    y = y + f(x, y) * h;
  }
  printf("\nThe values of y at x= %f is : %f", xp, y);
  getch();
  return 0;
}