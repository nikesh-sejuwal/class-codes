// Min-max using recursion method
#include <stdio.h>
#include <conio.h>

void minmax(int *A, int l, int r, int *min, int *max)
{
  int min1, min2, max1, max2, mid;
  if (l == r)
  {
    *min = A[l];
    *max = A[r];
  }
  else if (l == r - 1)
  {
    if (A[l] < A[r])
    {
      *min = A[l];
      *max = A[r];
    }
    else
    {
      *min = A[r];
      *max = A[l];
    }
  }
  else
  {
    mid = (l + r) / 2;
    minmax(A, l, mid, &min1, &max1);
    minmax(A, mid + 1, r, &min2, &max2);

    *min = (min1 < min2) ? min1 : min2;
    *max = (max1 < max2) ? max2 : max1;
  }
}

void main()
{
  int max, min;
  int A[5];
  printf("Enter numbers: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("The numbers are: \n");
  for (int i = 0; i < 5; i++)
  {

    printf("%d\t", A[i]);
  }

  minmax(A, 0, 4, &min, &max);
  printf("The min and max is: %d %d", min, max);
}