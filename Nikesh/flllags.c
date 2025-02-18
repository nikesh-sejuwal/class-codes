#include <stdio.h>
#include <conio.h>
void main()
{
  int A[10]={1,2,3,4,5,6,8,10,12,13
  };
  int a,b;
  for (a=0; a<10; a++)
  {
    for (b=a; b<10; b++)
    {
      if (A[a]-A[b]==5 || A[b]-A[a]==5)
      {
        printf("(%d,%d)",A[a],A[b]);
      }
    }

  }
}