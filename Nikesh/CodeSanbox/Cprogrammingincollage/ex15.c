#include<stdio.h>
#include<conio.h>
void main()
{
  int A[3][3];
  int i,j,product=1;
  printf("Enter 3*3 matrix\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&A[i][j]);
      if(i+j==2) product*=A[i][j];
    }
  }
  printf("\n Product of right diagonal is :%d",product);
  
}