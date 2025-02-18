#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
void bubble_sort(int *, int);
void selection_sort(int *, int);
void insertion_sort(int *, int);
void quick_sort(int *, int, int);
void merge_sort(int *, int);
void heap_sort(int *, int);
int partition(int *, int, int);
void merge(int *, int, int, int);
void max_heapify(int *, int, int);
void build_max_heap(int *, int);

void minmax(int *, int, int, int *, int *);
void generate_list(int *, int);
void display(int *, int);

int main()
{
  int *A, N;
  // int min, max;

  clock_t start, end;
  double timetaken;
  printf("\nEnter the list size: ");
  scanf("%d", &N);
  fflush(stdin);

  A = (int *)malloc(sizeof(int) * N);
  generate_list(A, N);

  start = clock();
  selection_sort(A, N);
  end = clock();
  timetaken = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Time taken for the selection sort is %f", timetaken);
  start = clock();
  quick_sort(A, 0, N);
  end = clock();
  timetaken = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Time taken for the Quick sort is %f", timetaken);
  // display(A, N);
  free(A);
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
  int i, num;
  srand(time(0));
  for (size_t i = 0; i < N; i++)
  {
    num = rand() % 1001;
    A[i] = num;
  }
}

void bubble_sort(int *A, int n)
{
  int i, j, tmp;
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - i - 1; j++)
    {
      if (A[j] > A[j + 1])
      {
        tmp = A[j];
        A[j] = A[j + 1];
        A[j + 1] = tmp;
      }
    }
  }
}

void quick_sort(int *A, int l, int r)
{
  if (l < r)
  {
    int q = partition(A, l, r); // Moved the declaration of q inside the if statement
    quick_sort(A, l, q - 1);
    quick_sort(A, q + 1, r);
  }
}

int partition(int *A, int l, int r)
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

void insertion_sort(int *A, int n)
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

void max_heapify(int *arr, int N, int i)
{
  int largest = i;
  int left = 2 * i;
  int right = 2 * i + 1;
  if (left < N && arr[left] > arr[largest])
    largest = left;
  if (right < N && arr[right] > arr[largest])
    largest = right;
  if (largest != i)
  {
    swap(&arr[i], &arr[largest]);
    max_heapify(arr, N, largest);
  }
}
void heap_sort(int *arr, int N)
{
  for (int i = N / 2 - 1; i >= 0; i--)

    max_heapify(arr, N, i);

  for (int i = N - 1; i >= 0; i--)
  {
    swap(&arr[0], &arr[i]);
    max_heapify(arr, i, 0);
  }
}

void selection_sort(int *A, int n)
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
    if (iMin != i)
    {
      swap(&A[i], &A[iMin]);
    }
  }
}

void minmax(int *A, int i, int j, int *minn, int *maxx)
{
  int min1, max1, min2, max2, mid;
  if (i == j)
  {
    *minn = *maxx - A[i];
  }
  else if (i == j - 1)
  {
    if (A[i] < A[j])
    {
      *minn = A[i];
      *maxx = A[j];
    }
    else
    {
      *minn = A[j];
      *maxx = A[i];
    }
  }
  else
  {
    mid = (i + j) / 2;
    minmax(A, i, mid, &min1, &max1);
    minmax(A, mid + 1, j, &min2, &max2);

    if (min1 < min2)
      *minn = min1;
    else
      *minn = min2;

    if (max1 > max2)
      *maxx = max1;
    else
      *maxx = max2;
  }
}