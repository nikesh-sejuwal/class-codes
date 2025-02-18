//WAP in C that 1. checks if a number is palindrome or not.
#include<stdio.h>
#include<conio.h>



void pal(void);
void main(){
  pal();
}
void pal()
{
  int n,r,sum=0,c;
  printf("Enter the number: ");
  scanf("%d",&n);
  c=n;
  while(n>0)
  {
   r=n%10; 
   sum=r+(sum*10);
   n=n/10;
  }
  if(sum==c)
  {
    printf("Yes, The given number is palindrome.");
  }
  else printf("No, The given number isnot palindrome.");
}