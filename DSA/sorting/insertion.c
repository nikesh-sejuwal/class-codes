#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void InsertionSort(int A[], int n)
{
  int i, j, iMin;
  for (i = 1; i < n; i++)
  {
    iMin = A[i];
    for (j = i; j >= 1 && A[j - 1] > iMin; j--)
    {
      swap(&A[j], &A[j - 1]);
    }
    A[j] = iMin;
  }
}

int main()
{
  int A[50], n;
  printf("Enter the number of sorting items: ");
  scanf("%d", &n);
  printf("Enter the %d data items", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("Before sorting: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
  InsertionSort(A, n);
  printf("\nAfter sorting: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", A[i]);
  }
}