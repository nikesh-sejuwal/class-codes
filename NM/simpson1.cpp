#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) 3 * (x) * (x) + 2 * (x)-5

int main()
{
  int i, k;
  float a, h, x0, xn, fx0, fxn, term, v;
  printf("Enter the lower and upper limit: \n");
  scanf("%f%f", &x0, &xn);
  printf("Enter the number of segment: \n");
  scanf("%d", &k);
  h = (xn - x0) / k;
  fx0 = f(x0);
  fxn = f(xn);
  term = fx0 + fxn;
  for (i = 1; i <= k - 1; i + 2)
  {
    a = x0 + i * h;
    term = term + 4 * (f(a));
  }
  for (i = 2; i <= k - 2; i = i + 2)
  {
    a = x0 + i * h;
    term = term + 2 * (f(a));
  }
  v = (h / 3) * term;
  printf("value of integration = %f\n", v);
  getch();
  return 0;
}