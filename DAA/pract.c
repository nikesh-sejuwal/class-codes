#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *A, int *B)
{
  int temp = *A;
  *A = *B;
  *B = temp;
}

void generatelist(int A[], int N)
{
  int i, num;
  srand(time(0));
  for (i = 0; i < N; i++)
  {
    num = rand() % 1001;
    A[i] = num;
  }
}

void display(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    printf("%d\t", A[i]);
  }
}

void bubble(int A[], int N)
{
  for (int i = 0; i < N - 1; i++)
  {
    for (int j = 0; j < N - 1 - i; j++)
    {
      if (A[j] > A[j + 1])
      {
        int temp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = temp;
      }
    }
  }
}
int partition(int *A, int l, int r)
{
  int i = l - 1;
  for (int j = l; j <= r - 1; j++)
  {
    if (A[j] <= A[r])
    {
      i = i + 1;
      swap(&A[i], &A[j]);
    }
  }
  swap(&A[r], &A[i + 1]);
  return i + 1;
}
void quicksort(int *A, int l, int r)
{
  if (l < r)
  {

    int q = partition(A, l, r);
    quicksort(A, l, q - 1);
    quicksort(A, q + 1, r);
  }
}

void main()
{
  int *A, N;
  clock_t start, end;
  double timetaken, timetaken1;
  printf("Enter the size of list: ");
  scanf("%d", &N);

  A = (int *)malloc(sizeof(int) * N);
  generatelist(A, N);
  start = clock();
  bubble(A, N);
  end = clock();
  timetaken = (double)(end - start) / CLOCKS_PER_SEC;
  printf("The total time is: %f\n", timetaken);
  fflush(stdin);
  start = clock();
  quicksort(A, 0, N);
  end = clock();
  timetaken1 = (double)(end - start) / CLOCKS_PER_SEC;
  printf("The total time quick is: %f", timetaken1);
  // display(A, N);
  // free(A);
}