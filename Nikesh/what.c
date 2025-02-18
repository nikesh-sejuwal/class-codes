#include<stdio.h>
#include<conio.h>

void main()
{
  int n,reverse=0,reminder;
  printf("Input the number: ");
  scanf("%d",&n);
  while(n!=0)
  {
    reminder=n%10;
    reverse=reverse*10+reminder;
    n=n/10;
  }
  printf("The inverse of the number is %d",reverse);
}