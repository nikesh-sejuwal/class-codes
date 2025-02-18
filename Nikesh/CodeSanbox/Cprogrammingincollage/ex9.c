//WAP in C that dynamically and count total 2 digit no in the array 
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[8];
  int i=0, count=0;

  printf("Enter the 8 digit numbers: ");
  
  for(i=0;i<8;i++)
  {
     scanf("%d",&A[i]);
     
    if(A[i]>9 && A[i]<100) count++;
  }
  printf("\n Total 2-digit numbers: %d",count);
}