#include <stdio.h>
#include <conio.h>
void main()
{
  int a,r,sum,i;
  printf("The armstrong numbers from 1-10000 is given below: \n");
  for (i=0; i<10000; i++)
  {
    a=i;
    sum=0;
    while (a!=0)
    
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
    {
    printf("%d\n",i);
    }
    //printf("%d",sum);
  }
  return;
}