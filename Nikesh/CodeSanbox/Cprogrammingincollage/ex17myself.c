#include<stdio.h>
#include<conio.h>
#include<string.h>
void changeE(char[]);

void main()
{
  char a[30];
  printf("Enter the word to be changed: ");
  scanf("%s",a);
  changeE(a);
  printf("The modified word is %s",a);
  getch();
}
void changeE(char str[])
{
  int len= strlen(str);
  int i;
  for(i=0; i<len; i++)
  {
    if(str[i]=='n')
    {
      str[i]='ch';
    }
  }
}