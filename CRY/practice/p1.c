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
  int a, b, A, B, p, g, keyA, keyB;
  printf("Enter the value of p and g: ");
  scanf("%d%d", &p, &g);
  printf("Enter the  secret key for first person:");
  scanf("%d", &a);
  printf("Enter the  secret key for second person:");
  scanf("%d", &b);
  // Compute public key
  A = compute(g, a, p);
  B = compute(g, b, p);

  // compute private key
  keyA = compute(B, a, p);
  keyB = compute(A, b, p);

  printf("First person secreat key is: %d\n", keyA);
  printf("Second person secreat key is: %d", keyB);
  return 0;
}