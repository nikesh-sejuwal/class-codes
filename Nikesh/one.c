//Armstrong numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
  int a,i,r=0,sum,n;
  printf("The armstrong number from 1-10000 is given below. ");
  for (i=1; i<=10000; i++)
  {
    sum=0;
    a=i;
    while(a!=0)
    {
      r=a%10;
      if (i<10)
      {
      sum=sum+r;
      }
      else if (i<100)
      {
        sum=sum+r*r;
      }
      else if (i<1000)
      {
        sum=sum+r*r*r;
      }
      else if (i<10000)
      {
        sum=sum+r*r*r*r;
      }
      a=a/10;
    }
  if (i==sum)
  printf("%d\n",i);
  }
}