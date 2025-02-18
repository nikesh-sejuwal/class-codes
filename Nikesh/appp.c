#include <stdio.h>
void main()
{
  int a = 20, b = 10;
  a = a + b;
  b = a - b;
  a = a - b;
  printf("After swap a=%d b=%d", a, b);
}