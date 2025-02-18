#include <stdio.h>
#include <conio.h>
void main()
{
  int a,rev=0,rem,temp;
  printf("Enter the number which reverse is to be calculated: ");
  scanf("%d",&a);
  while (a!=0)
  {
    temp=temp;
    rem=a%10;
    rev=rev*10+rem;
    a=a/10;
  }
  printf("The reverse of given no is %d",rev);
}