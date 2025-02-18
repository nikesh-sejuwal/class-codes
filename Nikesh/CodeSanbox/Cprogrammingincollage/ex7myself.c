//WAP in C that displays all armstrong numbers below 10000
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,x,sum,r,s;
  printf("The armstrong numbers are as given below\n");

   for (i=0;i<=9;i++)
  {
    sum=0;
    x=i;
    while(x!=0)
    {
      r=x%10;
      sum+=r;
      x=x/10;
    }
    if (sum==i)
    {
    printf(" %d\n",i);
    }
  }


   for (i=10;i<=99;i++)
  {
    sum=0;
    x=i;
    while(x!=0)
    {
      r=x%10;
      sum+=(r*r);
      x=x/10;
    }
    if (sum==i)
    {
    printf(" %d\n",i);
    }
  }


  for (i=100;i<=999;i++)
  {
    sum=0;
    x=i;
    while(x!=0)
    {
      r=x%10;
      sum+=(r*r*r);
      x=x/10;
    }
    if (sum==i)
    {
    printf(" %d\n",i);
    }
  }


   for (i=1000;i<=9999;i++)
  {
    sum=0;
    x=i;
    while(x!=0)
    {
      r=x%10;
      sum+=(r*r*r*r);
      x=x/10;
    }
    if (sum==i)
    {
    printf(" %d\n",i);
    }
  }

}