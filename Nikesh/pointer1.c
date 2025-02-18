#include <stdio.h>
#include <conio.h>
void main()
{
  int a,i,count=0;
  printf("Put the number ");
  scanf("%d",&a);
  for (i=1; i<=a; i++)
  {
    if (a%i==0)
    {
     count++;
    }
  }
  if (count==2)
  {
    printf("The number is prime.");
  }
  else 
  {
    printf("The number is not prime.");
  }
}