#include <stdio.h>
#include <conio.h>

void MinMax(int *A, int i, int j, int *min, int *max)
{
  int min1, max1, min2, max2, mid;
  if (i == j) // If there is only one element
  {
    *min = *max = A[i];
  }
  else if (i == j - 1) // If there are two elements
  {
    if (A[i] < A[j])
    {
      *min = A[i];
      *max = A[j];
    }
    else
    {
      *min = A[j];
      *max = A[i];
    }
  }
  else // If there are more than two elements
  {
    mid = (i + j) / 2;

    // Find min and max in the left half
    MinMax(A, i, mid, &min1, &max1);
    // Find min and max in the right half
    MinMax(A, mid + 1, j, &min2, &max2);

    // Combine results
    *min = (min1 < min2) ? min1 : min2;
    *max = (max1 > max2) ? max1 : max2;
  }
}

void main()
{
  int A[6] = {45, 0, 204, 22, 50, 8};
  int min, max;

  MinMax(A, 0, 5, &min, &max);
  printf("\nMin: %d\tMax: %d\n", min, max);
}
 