#include<stdio.h>
#include<math.h>
void main()
{
  int A[10];
  int i,j,k;
  printf("Enter 10 numbers: \n");
  for(k=0;k<10; k++)
    {
      scanf("\n%d",&A[i]);
    }
    for(i=0;i<10;i++)
    {
     for(j=0;j<10;j++)
     {
       if ( A[i]-A[j]>5||A[j]-A[i]>5)
       printf("(%d,%d)",A[i],A[j]);
     }
    }

}