//Check whether the given number is perfect or not.
#include<stdio.h>
#include<conio.h>
#include<math.h>
fflush(stdin);
void main()
{
  int a[5];
  float i;
  printf("Enter the number for check: \n");
  scanf("%d",&a);

  for (i=0; i<=a/2; i++)
  {
    if(a%i==pow (a, 2))
    {
      printf("The given number is perfect square number.");
    }
    else printf("The given number is not perfect square number.");
  }
}