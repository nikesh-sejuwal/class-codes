//WAP in C that takes cost price & selling price of a product as input and varifies if profit , lost or breakeven has occured. (Till user says "NO")
#include<stdio.h>
#include<conio.h>
void main()
{
  int ans;
  int cp,sp,res;
  do {
  printf("Enter the cost price: ");
  scanf("%d",&cp);
  printf("Enter the Selling price: ");
  scanf("%d",&sp);

  if(cp>sp)
  {
   res=cp-sp;
   printf("Lost: %d", res);
  }
  else if (sp>cp)
  {
    res=sp-cp;
    printf("Profit: %d",res);
  }
  else if (cp=sp)
  printf("Breakeven!");
  printf("\nDo you want a continue (1/0) ");
  scanf("%d",&ans);
  } while (ans );
}