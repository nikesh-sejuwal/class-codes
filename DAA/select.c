#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int *, int, int);
int select(int *, int, int, int);
void display(int *, int);

void main()
{
  int rank;
  int A[10] = {45, 3, 6, 45, 34, 2, 452, 14, 2, 12};
  int N = sizeof(A) / sizeof(A[0]);
  printf("Enter the rank of element which you want to search: ");
  scanf("%d", &rank);
  int res = select(A, 0, 9, rank);
  printf("Elemet of rank %d in A: %d", rank, res);
}

void display(int *A, int N)
{
  printf("\n");
  for (int i = 0; i < N; i++)
  {
    printf("%d\t", A[i]);
  }
  printf("\n\n");
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

int select(int *A, int p, int r, int i)
{
  int q, k;
  if (p == r)
  {
    return A[p];
  }
  else
  {
    q = partition(A, p, r);
    k = q - p - q;
    if (i < k)
    {
      select(A, p, q - 1, i);
    }
    else if (i < k)
    {
      select(A, q + 1, r, i - k);
    }
    else
      return A[q];
  }
}