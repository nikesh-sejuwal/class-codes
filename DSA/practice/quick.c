#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int arr[], int l, int r)
{
  int x = arr[r];
  int i = l - 1;
  for (int j = l; j <= r - 1; j++)
  {
    if (arr[j] <= x)
    {
      i = i + 1;
      swap(&arr[i], &arr[j]);
    }
  }
  swap(&arr[r], &arr[i + 1]);
  return i + 1;
}

void quickSort(int arr[], int l, int r)
{
  if (l < r)
  {

    int q = partition(arr, l, r);
    quickSort(arr, l, q - 1);
    quickSort(arr, q + 1, r);
  }
}

int main()
{
  int arr[50], n, i;
  printf("Enter the number of data items: ");
  scanf("%d", &n);
  printf("Enter %d data items: ", n); // Corrected the input prompt
  int l = 0;
  int r = n - 1;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Before sorting:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", arr[i]);
  }
  quickSort(arr, l, r);
  printf("\nAfter sorting:\n");
  for (i = 0; i < n; i++)
  {
    printf("%d  ", arr[i]);
  }
  return 0; // Added a return statement to main
}
