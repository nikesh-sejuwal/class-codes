#include <stdio.h>
#include <conio.h>
void main()
{
  int a[10],i,j;
  printf("Enter the number: ");
  for (i=0; i<10; i++)
  scanf("%d",&a[i]);
  {
    for (i=0; i<10; i++)
    {
    for(j=0; j<i; j++)
    {
      if (a[i]+a[j]==14)
      {
        printf("(%d,%d)",a[i],a[j]);
      }
    }
    }
  }
}