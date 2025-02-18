#include <stdio.h>
#include <conio.h>
void main()
{
  int x, y, z;
  printf("Enter the 3 numbers: ");
  scanf("%d %d %d", &x, &y, &z);
  if (x > y && x > z)
  {
    printf("The greatest numbers amnong them is %d", x);
  }
  else if (y > x && y > z)
  {
    printf("The greatest number among them is %d", y);
  }
  else
  {
    printf("The greatest number among them is %d", z);
  }
}