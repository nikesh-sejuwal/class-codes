//WAP intiliaze dynamically and searches for number 6 in the list.
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[8];
  int i, count=0;
  printf("\n Enter 8 digit number: \n");
  for (i=0; i<8;i++)
  {
    scanf("%d",&A[i]);
  }
  for(i=0; i<8;i++)
  {
    if (A[i]==6)
    {
      printf("6 exist \n");
    
    }
    else
    printf("6 doesnot exist.");
  }
}