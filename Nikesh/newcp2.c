#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[3][3], i, j, sum = 0;
  printf("Enter the 3*3 matrix. ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }

  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      if (ij)
        sum += arr[i][j];
    }
  }
  printf("The sum is %d.", sum);
}