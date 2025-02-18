#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={34,56,32,12,45},i,item;
  printf("Enter the searching number: ");
  scanf("%d",&item);
  for(i=0; i<5; i++)
  {
    if(a[i]==item)
    {
      printf("Item is founded and the location is %d",i);
      break;
    }
   
  }
  
   if (a[i]!=item)
   printf("Item not found");
}