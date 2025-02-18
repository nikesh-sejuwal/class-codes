#include <stdio.h>
#include <math.h>
#define f(x) (x) + 2

int main()
{
  int i, k;
  float a, h, x0, xn, fx0, fxn, term, v;
  printf("Enter the lower and upper limit: \n");
  scanf("%f%f", &x0, &xn);
  // printf("Enter the number of segment: \n");
  // scanf("%d", &k);
  // h = (xn - x0) / k;
  h = xn - x0;
  fx0 = f(x0);
  fxn = f(xn);
  term = fx0 + fxn;
  // for (i = 1; i <= k - 1; i++)
  // {
  //   a = x0 + i * h;
  //   term = term + 2 * (f(a));
  // }
  v = (h / 2) * term;
  printf("value of integration = %f\n", v);
  // getch();
  // return 0;
}