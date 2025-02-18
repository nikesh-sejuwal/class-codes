#include <stdio.h>
#include <conio.h>
int fibbo(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
    return (fibbo(n - 1) + fibbo(n - 2));
}

int main()
{
  int choice;
  printf("Enter the number of your choice: ");
  scanf("%d", &choice);
  printf("fibb sequence\n");
  for (int i = 0; i < choice; i++)
  {
    printf("%d ", fibbo(i));
  }
}