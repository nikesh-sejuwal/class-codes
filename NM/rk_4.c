#include <stdio.h>
#include <conio.h>
#include <math.h>

#define f(x, y) (x * x + y * y)

int main()
{
  int i;
  float x, y, x0, y0, xp, h, m1, m2, m3, m4;
  printf("Enter the initial values of x and y : ");
  scanf("%f%f", &x0, &y0);
  printf("Enter the values at which functional value is required: ");
  scanf("%f", &xp);
  printf("\nEnter the step size: ");
  scanf("%f", &h);
  printf("\niter\t\tm1\t\t\tm2\t\t\tm3\t\t\tm4");
  x = x0;
  y = y0;

  for (x = x0; x < xp; x = x + h)
  {
    m1 = f(x, y);
    m2 = f((x + (h / 2)), (y + (m1 * (h / 2))));
    m3 = f((x + (h / 2)), (y + (m2 * (h / 2))));
    m4 = f((x + h), (y + (m3 * h)));
    y = y + (h / 6) * (m1 + 2 * m2 + 2 * m3 + m4);
    i++;
    printf("\n%d\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f\t\t%f", i, m1, m2, m3, m4, x + h, y);
  }
  printf("\nThe values of y at x= %f is : %f", xp, y);
  getch();
  return 0;
}