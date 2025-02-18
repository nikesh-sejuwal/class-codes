#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionsort(int A[], int n)
{
  int i, j, iMin;
  for (i = 0; i < n - 1; i++)
  {
    iMin = i;

    for (j = i + 1; j < n; j++)
    {
      if (A[j] < A[iMin])
      {
        iMin = j;
      }
    }

    swap(&A[i], &A[iMin]);
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
  selectionsort(A, n);
  printf("\nAfter sorting \n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", A[i]);
  }
}