#include <stdio.h>
#include <conio.h>

inpt()
{
  int a,b,i=0
  ;
  for (a=0; a<6; a++)
  {
    for(b=0; b<a; b++)
    {
      printf("%d",i);
    }
    printf("\n");
    i++;
  }
}
void main()
{
  inpt();
}