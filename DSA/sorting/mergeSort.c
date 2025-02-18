#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int A[], int lStart, int lEnd, int Rend);
void mergeSort(int A[], int p, int r);

int main()
{
  int n;

  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int *A = (int *)malloc(n * sizeof(int));

  printf("Enter %d elements in the array:\n", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }

  printf("Original array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }

  mergeSort(A, 0, n - 1);

  printf("\nSorted array: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }

  free(A);

  return 0;
}

void merge(int A[], int lStart, int lEnd, int Rend)
{
  int Ri, y, i, l;
  int Rstart = lEnd + 1;
  int x = 0;
  int temp_size = Rend - lStart + 1;
  int *temp = (int *)malloc(temp_size * sizeof(int));

  for (l = lStart, Ri = Rstart; l <= lEnd && Ri <= Rend;)
  {
    y = A[l] < A[Ri] ? l++ : Ri++;
    temp[x++] = A[y];
  }

  while (l <= lEnd)
  {
    temp[x++] = A[l++];
  }

  while (Ri <= Rend)
  {
    temp[x++] = A[Ri++];
  }

  for (i = 0; i < x; i++)
  {
    A[lStart + i] = temp[i];
  }

  free(temp);
}

void mergeSort(int A[], int p, int r)
{
  if (p < r)
  {
    int q = floor((p + r) / 2);
    mergeSort(A, p, q);
    mergeSort(A, q + 1, r);
    merge(A, p, q, r);
  }
}
