#include <stdio.h>
#include <conio.h>
#include <string.h>

void swap1(char **a, char **b)
{
  char *k;
  k = *a;
  *a = *b;
  *b = k;
}

void main()
{
  char a[20], b[20];
  printf("Enter 2 string\n");
  scanf("%s %s", a, b);

  printf("Before swap %s %s", a, b);
  swap1(&a, &b);

  printf("\nAfter swap %s %s", a, b);
}