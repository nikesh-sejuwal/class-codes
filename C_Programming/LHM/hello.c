#include <stdio.h>
void main()
{
  int a, i, sum = 0;
  printf("Enter till when the number is to be added: ");
  scanf("%d", &a);
  for (i = 1; i <= a; i++)
  {
    sum = sum + i;
  }
  printf("%d", sum);
}