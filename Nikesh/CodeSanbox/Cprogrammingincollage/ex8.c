//
#include<stdio.h>
#include<conio.h>
void main()
{
  int A[8]={4,5,8,12,15,75,9,10};
  int i, count=0;
  for(i=0;i<8; i++){
    if(A[i]%5==0) count++;
  }
  printf("\n Total no in the array divisible by 5:%d",count);
}
