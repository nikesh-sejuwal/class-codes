#include <stdio.h>

int compute(int a, int m, int n)
{
  int r;
  int y = 1;
  while (m > 0)
  {
    r = m % 2;
    if (r == 1)
    {
      y = (y * a) % n;
    }
    a = (a * a) % n;
    m = m / 2;
  }
  return y;
}

int main()
{
  int a, b, A, B, keyA, keyB, p, g;
  printf("Enter the prime no (p): ");
  scanf("%d", &p);
  printf("Enter the generator  (g): ");
  scanf("%d", &g);
  printf("Enter the private key of first person: ");
  scanf("%d", &a);
  printf("Enter the private key of second person: ");
  scanf("%d", &b);
  // Public key
  A = compute(g, a, p);
  B = compute(g, b, p);
  // key generator
  keyA = compute(B, a, p);
  keyB = compute(A, b, p);
  printf("The secret key of A is: %d and B is %d", keyA, keyB);
}