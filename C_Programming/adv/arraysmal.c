#include <stdio.h>
#include <conio.h>
void main()
{
  int i, n, small, large, arr[20];
  printf("How many arrays are there: ");
  scanf("%d", &n);
  printf("Enter the numbers \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  small = arr[0];
  large = arr[0];
  for (i = 0; i < n; i++)
  {
    if (small > arr[i])
    {
      small = arr[i];
    }
    if (large < arr[i])
    {
      large = arr[i];
    }
  }
  printf("The large number is %d\n and the small number is %d", large, small);
}