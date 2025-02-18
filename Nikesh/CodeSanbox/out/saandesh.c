#include<stdio.h>
#include<conio.h>
void main(){
  int i,n,sum=0,r;
  printf("The Armstrong numbers are as given below:\n");
  for (i=0; i<=10000;i++)
  {
    n=i; sum=0;
    while(n!=0)
    {
      r=n%10;
      if(i<10) 
      sum+=r;
      else if(i<100)
       sum+=r*r;
      else if(i<1000)
      sum+=r*r*r;
      else if (i<10000)
      sum+=r*r*r*r;
      n=n/10;
    }
    if(sum==i)
    printf("\n%d",i);
  }
}