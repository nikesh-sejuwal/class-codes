#include <stdio.h>
#include <conio.h>
void main()
{
  int a[100];
  int i;
  for (i=1; i<=51; i++)
  {
    if (i%2==0)
    {
      a[i]=i;
    }
    printf("%d\t",a[i]);
  }
  
}