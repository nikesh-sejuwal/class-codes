#include <stdio.h>
#include <conio.h>

int binarySearch(int arr[], int key, int low, int high)
{
  if (low > high)
  {
    return -1;
  }
  int mid = (low + high) / 2;
  if (arr[mid] == key)
  {
    return key;
  }
  else if (arr[mid] > key)
  {
    return binarySearch(arr, key, low, mid - 1);
  }
  else
  {
    return binarySearch(arr, key, mid + 1, high);
  }
}

int main()
{
  int key, n;
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  n = 10 - 1;
  printf("Array: ");
  for (int i = 0; i <= n; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\nEnter key to search: ");
  scanf("%d", &key);
  int result = binarySearch(A, key, 0, n);
  if (result == -1)
  {
    printf("Element not found\n");
  }
  else
  {
    printf("Element found at index %d\n", result);
  }
  return 0;
}
