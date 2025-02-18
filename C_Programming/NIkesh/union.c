#include <stdio.h>
#include <conio.h>
void main()
{
  int a[3], b[3], c[6];
  int i, j;
  printf("Enter in set A \n");
  for (i = 0; i < 3; i++)
  {
    scanf("%d", &a[i]);
  }

  printf("Enter in set B \n");
  for (j = 0; j < 3; j++)
  {
    scanf("%d", &b[j]);
  }
  printf("The intersection of the array is :\n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (a[i] == b[j])
      {
        printf("%d", a[i]);
      }
    }
  }
}