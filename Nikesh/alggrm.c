#include<stdio.h>
#include<conio.h>
void main()
{
  int i,sum,r,x;
  printf("The Armstrong numbers are as given below:- \n");
  for (i=1; i<9999; i++)
  {
    sum=0;
    x=i;
    while(x!=0)
    {
      r=x%10;
      if(i<10)
      {
        sum=sum+r;
      }
      else if(i<100)
      {
        sum=sum+r*r;
      }
      else if(i<1000)
      {
        sum=sum+r*r*r;
      }
      else if(i<10000)
      {
        sum=sum+r*r*r*r;
      }
    
      x=x/10;
    }
    if (i==sum) 
    printf("%d\n", i);
  }
}