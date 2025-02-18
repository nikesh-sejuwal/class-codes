//WAP in C which declares an integer array of size 8and initialization of statically.
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[8]={4,8,1,10,20,70,85,95};
  int i,count=0;
  for (i=0; i<=7;i++)
  {
    if(A[i]%5==0)
    count++;
  
  }
  printf("The no. divisible by 5 are: %d", count);
}