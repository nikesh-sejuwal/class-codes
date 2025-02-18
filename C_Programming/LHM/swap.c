#include <stdio.h>
#include <conio.h>

void myswap(int *a, int *b)
{
  int k;
  k = *a;
  *a = *b;
  *b = k;
}
void main()
{
  int a = 10, b = 20;
  printf("Old value of a= %d and old value of b=%d\n\n", a, b);
  myswap(&a, &b);
  printf("New value of a=%d and New value of b=%d\n", a, b);
}