#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubblesort(int A[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - 1 - i; j++)
    {
      if (A[j] > A[j + 1])
      {
        swap(&A[j], &A[j + 1]);
      }
    }
  }
}

int main()
{
  int A[50], n, i;
  printf("Enter the number of data items: ");
  scanf("%d", &n);
  printf("Enter the number of %d data items", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("Before sorting \n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", A[i]);
  }
  bubblesort(A, n);
  printf("\nAfter sorting \n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", A[i]);
  }
}