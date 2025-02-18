#include<stdio.h>
#include<conio.h>
void main()
{
  int A[6];
  int upper=5,lower=0,mid,f=0,i,item;
  printf("Enter the 6 numbers: ");
  for(i=0; i<=5; i++)
  {
    scanf("%d",&A[i]);
  }
  printf("\nEnter the searching word: ");
  scanf("%d",&item);
  while(lower<=upper)
  {
    mid=(upper+lower)/2;
    if(A[mid]==item)
    {
     f=1;
     break;
    }
    if(A[mid]<item)
    {
      lower=mid+1;
    }
    if(A[mid]>item)
    {
      upper=mid-1;
    }

  }
  if(f==1)
  {
    printf("Item has been found and its location is %d",i);
  }
  else printf("Item is not found.");
}