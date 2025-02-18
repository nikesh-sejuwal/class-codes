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
  int A[10] = {45, 3, 6, 43, 34, 2, 452, 14, 22, 12};
  int N = sizeof(A) / sizeof(A[0]);
  printf("Enter the rank of element which you want to search (1 to %d): ", rank);
  scanf("%d", &rank);
  if (rank < 1 || rank > N)
  {
    printf("Invalid rank\n");
  }
  else
  {
    int res = select(A, 0, N - 1, rank - 1);
    printf("Element of rank %d in A: %d\n", rank, res);
  }
}

void display(int A[], int N)
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
  int x = A[r];
  int i = l - 1;
  for (int j = l; j <= r - 1; j++)
  {
    if (A[j] <= x)
    {
      i++;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[i + 1], &A[r]);
  return i + 1;
}

int select(int A[], int p, int r, int i)
{
  if (p == r)
  {
    return A[p];
  }
  int q = partition(A, p, r);
  int k = q - p + 1;
  if (i == k - 1)
  {
    return A[q];
  }
  else if (i < k - 1)
  {
    return select(A, p, q - 1, i);
  }
  else
  {
    return select(A, q + 1, r, i - k);
  }
}
