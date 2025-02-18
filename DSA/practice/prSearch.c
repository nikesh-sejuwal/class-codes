#include <stdio.h>
#include <conio.h>

int main()
{
  int arr[100];
  int i, search, x, n, flag = 0;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  printf("Enter all the %d elements: ", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("{ ");
  for (i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
  printf("}\n");

  printf("Enter the element to be searched: ");
  scanf("%d", &search);
  for (i = 0; i < n; i++)
  {
    if (arr[i] == search)
    {
      printf("%d Element found in index %d", search, i);
      flag = 1;
      break;
    }
  }
  if (flag != 1)
  {
    printf("Element not found,Enter valid input:");
  }
}