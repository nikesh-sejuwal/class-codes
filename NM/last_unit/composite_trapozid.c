#include <stdio.h>
#include <math.h>
#define f(x) 3 * (x) * (x) + 2 * (x)-5

int main()
{
  int i, k;
  float a, h, xl, xu, fxl, fxu, term, v;
  printf("Enter the lower and upper limit: \n");
  scanf("%f%f", &xl, &xu);
  printf("Enter the number of segment: \n");
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
  printf("value of integration = %f\n", v);
  // getch();
  // return 0;
}