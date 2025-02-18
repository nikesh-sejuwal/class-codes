// Insertion sort in C programming
#include <stdio.h>

void insertionSort(int A[], int n)
{
  int i, j, iMin, temp;
  for (i = 1; i < n; i++)
  {
    iMin = A[i];
    for (j = i; j >= 1 && A[j - 1] > iMin; j--)
    {
      temp = A[j];
      A[j] = A[j - 1];
      A[j - 1] = temp;
    }
  }
  A[j] = iMin;
}

int main()
{
  int A[100], n, i;
  printf("Enter the number of data: ");
  scanf("%d", &n);
  printf("Enter the %d data items: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("Before Sorting: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  insertionSort(A, n);
  printf("\n After Sorting: \n");
  for (i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
}