// Check the number either prime or not.
#include <stdio.h>
#include <conio.h>

void main()
// {
//   int a, i, count = 0;
//   printf("Enter the number to be checked: ");
//   scanf("%d", &a);
//   for (i = 1; i <= a; i++)
//   {
//     if (a % i == 0)
//     {
//       count++;
//     }
//   }
//   if (count == 2)
//   {
//     printf("The given number is prime");
//   }
//   else
//   {
//     printf("The given number is not prime.");
//   }
//}
{
  int a, i, k;
  printf("Enter the number to be checked: ");
  scanf("%d", &a);
  printf("Prime number from range (") for (i = 1; i <= a; i++)
  {
    if (a % i == 0)
    {
      count++;
    }
  }
  if (count == 2)
  {
    printf("The given number is prime");
  }
  else
  {
    printf("The given number is not prime.");
  }
}