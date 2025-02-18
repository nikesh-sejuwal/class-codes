#include <stdio.h>

// Function to compute 'a^m mod n' using Exponentiation by Squaring
long long int compute(long long int a, long long int m, long long int n)
{
  long long int r;
  long long int y = 1;
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
  long long int p, g, a, b, A, B, keyA, keyB;

  // Prompt user for input
  printf("Enter modulus (p): ");
  scanf("%lld", &p);
  printf("Enter base (g): ");
  scanf("%lld", &g);
  printf("Enter first person's secret key (x): ");
  scanf("%lld", &a);
  printf("Enter second person's secret key (y): ");
  scanf("%lld", &b);

  // Compute public keys
  A = compute(g, a, p);
  B = compute(g, b, p);

  // Compute shared secret keys
  keyA = compute(B, a, p);
  keyB = compute(A, b, p);

  // Print the results
  printf("First person's shared secret key is %lld\n", keyA);
  printf("Second person's shared secret key is %lld\n", keyB);

  return 0;
}
