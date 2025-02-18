#include <stdio.h>
#include <conio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int n)
{
  int i, j, iMin;
  for (i = 0; i < n - 1; i++)
  {
    iMin = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[iMin])
      {
        iMin = j;
      }
    }
    if (iMin != i)
    {
      swap(&arr[i], &arr[iMin]);
    }
  }
}


int main()
{
  int n, arr[50];
  printf("Enter the number of elements: \n");
  scanf("%d", &n);
  printf("Enter Elements: \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("Given elements: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  selectionSort(arr, n);
  printf("After selection: \n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}