// Allow user to give 5 numbers and add those 5 numbers
#include <stdio.h>
void main()
{
  int n[5], i;
  int sum = 0;
  printf("Enter 5 numbers:");
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &n[i]);
  }
  for (i = 0; i < 5; i++)
  {
    sum = sum + n[i];
  }
  printf("%d", sum);
}