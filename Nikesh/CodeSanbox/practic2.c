#include<stdio.h>
#include<conio.h>

void main()
{
  int i,count=0,n;
  printf("Enter the number to check whether prime or not: ");
  scanf("%d",&n);

  for(i=1;i<=n/2;i++)
  {
   if (n%i==0)
   {
     count++;
   }
  }

if (count==2)
{
  printf("It is a prime number.");
}
else
    printf("It is not prime number.");
    2
}