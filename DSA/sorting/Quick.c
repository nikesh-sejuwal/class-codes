#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int partition(int A[], int l, int r)
{
  // int x = A[r];
  int i = l - 1;
  for (int j = l; j <= r - 1; j++)
  { // Changed the condition to include r - 1
    if (A[j] <= A[r])
    {
      i = i + 1;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[r], &A[i + 1]);
  return i + 1;
}

void quickSort(int A[], int l, int r)
{
  if (l < r)
  {
    int q = partition(A, l, r); // Moved the declaration of q inside the if statement
    quickSort(A, l, q - 1);
    quickSort(A, q + 1, r);
  }
}

int main()
{
  int A[50], n, i;
  printf("Enter the number of data items: ");
  scanf("%d", &n);
  printf("Enter %d data items: ", n); // Corrected the input prompt
  int l = 0;
  int r = n - 1;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("Before sorting:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", A[i]);
  }
  quickSort(A, l, r);
  printf("\nAfter sorting:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", A[i]);
  }
  return 0; // Added a return statement to main
}
