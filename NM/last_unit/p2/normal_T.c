#include <stdio.h>
#include <math.h>

#define f(x) (x) + 2
int main()
{
  int i, k;
  float xl, xu, v, fxl, fxu, term, h, a;
  printf("Enter the upper and lower limit: ");
  scanf("%f %f", &xl, &xu);
  printf("Enter the number of segment: ");
  scanf("%d", &k);

  h = (xu - xl) / k;
  fxl = f(xl);
  fxu = f(xu);
  term = fxl + fxu;
  for (i = 1; i <= k - 1; i++)
  {
    a = xl + i * h;
    term = term + 2 * (f(a));
  }
  v = (h / 2) * term;
  printf("The value of integration is: %f", v);
}