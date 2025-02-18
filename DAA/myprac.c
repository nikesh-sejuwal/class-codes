#include <stdio.h>
#include <conio.h>

void swap(int *A, int *B)
{
  int temp = *A;
  *A = *B;
  *B = temp;
}

void selection_sort(int *A, int n)
{
  int i, j, iMin;
  for (i = 0; i < n; i++)
  {
    iMin = i;

    for (j = i + 1; j < n; j++)
    {
      if (A[j] < A[iMin])
      {
        iMin = j;
      }
    }
    if (iMin != i)
    {
      swap(&A[i], &A[iMin]);
    }
  }
}

void main()
{
  int A[] = {1, 4, 56, 78, 5, 4, 45, 34};
  int n = 8;
  printf("The sorted array is:");
  selection_sort(A, n);
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", A[i]);
  }
}