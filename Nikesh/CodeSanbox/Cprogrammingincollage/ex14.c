#include<stdio.h>
#include<conio.h>
void main()
{
  int A[3][3];
  int i,j; printf("Enter the 3*3 matrix: \n");
  for (i=0;i<3;i++)
  {
    
    for (j=0;j<3;j++)
    {
      scanf("%d",&A[i][j]);
    }
  }
  printf("\nInverse:\n");
  for (i=0;i<3;i++)
  {
    for (j=0;j<3;j++)
    {
      printf("%d\t",A[j][i]);
    }
  }
}