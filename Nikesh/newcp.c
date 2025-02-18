// bubble sort
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j, n, temp, arr[20];
  printf("Enter the no of elements in the array. ");
  scanf("%d", &n);
  printf("Enter the elements of array. \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n - 1; i++)
  {
    for (j = 0; j < n - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  printf("The sorted listed of the given array is \n");
  for (i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
}

// to search the element in the array.
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//   int arr[20], n, search, i;
//   printf("Enter the no. of elements in the array.\n");
//   scanf("%d", &n);

//   printf("Enter the elements in the array.\n");
//   for (i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }
//   printf("Enter the searching item in the array.  ");
//   scanf("%d", &search);
//   for (i = 0; i < n; i++)
//   {
//     if (search == arr[i])
//     {
//       printf("Element search found. and its location is %d", &arr[i]);
//     }
//     else
//     {
//       printf("Element is not found.");
//     }
//   }
// }
