#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void quick_sort(int *, int, int);
int partition(int *, int, int);
void generate_list(int *, int);
void display(int *, int);

int main()
{
  int *A, N;
  printf("\nEnter the list size: ");
  scanf("%d", &N);

  A = (int *)malloc(sizeof(int) * N);
  if (A == NULL)
  {
    fprintf(stderr, "Memory allocation failed\n");
    return 1;
  }

  generate_list(A, N);
  // Uncomment the next line if you want to see the generated list
  // display(A, N);

  clock_t start, end;
  double timetaken;

  start = clock();
  quick_sort(A, 0, N - 1);
  end = clock();

  timetaken = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Time taken is %f seconds\n", timetaken);

  // Uncomment the next line if you want to see the sorted list
  // display(A, N);

  free(A);
  return 0;
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

void generate_list(int A[], int N)
{
  srand(time(0));
  for (int i = 0; i < N; i++)
  {
    A[i] = rand() % 1001;
  }
}

void quick_sort(int *A, int l, int r)
{
  if (l < r)
  {
    int q = partition(A, l, r);
    quick_sort(A, l, q - 1);
    quick_sort(A, q + 1, r);
  }
}

int partition(int *A, int l, int r)
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
