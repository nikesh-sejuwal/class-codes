#include<stdio.h>
#include<conio.h>
void main(){
  int A[5]={10,20,30,40,50},lower=0,upper=4,f=0,mid,item;
  printf("Enter the searching item: ");
  scanf("%d",&item);

  while(lower<=upper)
  {
    mid=(lower+upper)/2;
    if(A[mid]==item)
    {
      f=1;
      break;
    }
    if(A[mid]<item){
      lower=mid+1;
    }
    else 
    upper=mid-1;
  }
  if(f==1){
    printf("The item is found and its location is %d",mid);
  }
  else printf("The item is not found");
}