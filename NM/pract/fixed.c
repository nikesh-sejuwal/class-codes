#include <stdio.h>
#include <conio.h>
#include <math.h>
#define E 0.000000001
int main()
{
  int i = 0;
  float x1, x0;
  printf("Enter the initial guess: ");
  scanf("%f", &x0);
  do
  {
    i++;
    x1 = 7 / x0;
    if (i <= 100)
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
  printf("Total iteration: %d", i);
  printf("\nroot: %f", x1);
}