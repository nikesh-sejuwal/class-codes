// #include <stdio.h>
// #include <conio.h>
// void TOH(int n, char A, char B, char C)
// {
//   if (n > 0)
//   {
//     TOH(n - 1, A, C, B);
//     printf("Move %d from %c to %c\n", n, A, B);
//     TOH(n - 1, C, B, A);
//   }
// }
// int main()
// {
//   int n;
//   printf("Enter the number of disks: ");
//   scanf("%d", &n);
//   TOH(n, 'S', 'D', 'I');
// }

#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(int arr[], int N, int i)
{
  int largest = i;
  int left = 2 * i;
  int right = 2 * i + 1;

  if (left < N && arr[left] > arr[largest])
  {
    largest = left;
  }
  if (right < N && arr[right] > arr[largest])
  {
    largest = right;
  }

  if (largest != i)
  {
    swap(&arr[i], &arr[largest]);
    heapify(arr, N, largest);
  }
}

void heapSort(int arr[], int N)
{
  for (int i = N / 2 - 1; i >= 0; i--)
  {
    heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--)
    {
      swap(&arr[i], &arr[0]);
      heapify(arr, N, 0);
    }
  }
}