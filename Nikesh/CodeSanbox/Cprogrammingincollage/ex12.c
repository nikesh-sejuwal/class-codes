//WAP in C that divides an arayy of dimension (3*4) and initializes it stasticslly.
//Find the sum of first column and product of last row.
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[3][4]={{0,2,6,4},{1,7,4,8},{3,5,3,7}};
  int i,j,sum=0,product=1;
  for(i=0;i<3;i++)
  {
    for(j=0;j<4;j++)
    {
      if (j==0) sum=sum+A[i][j];
      if (i==2) product=product*A[i][j];
    }
  }
  printf("\nSum of first column:%d\n Product of last row:%d ",sum, product);
}
