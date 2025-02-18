#include<stdio.h>
#include<conio.h>
void main()
{
  int A[3][3];
  int i,j,sum=0; printf("Enter the 3*3 matrix: \n");
  for (i=0;i<3;i++)
  {
    
    for (j=0;j<3;j++)
    {
      scanf("%d",&A[i][j]);
      if(i==j) sum+=A[i][j];
    }
  }
  printf("\nSum of left diagonal:%d",sum);
}