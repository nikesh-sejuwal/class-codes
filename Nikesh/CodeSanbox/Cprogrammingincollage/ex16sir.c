#include<stdio.h>
#include<conio.h>
#include<string.h>
int counte(char word[]);
void count15to55(int[]);
void main()
{
  char str[30];
  int B[10], res,len,i;
  printf("\nEnter word");
  gets(str);
  res=counte(str);
  printf("\n\nEnter 10 numbers: \n");
  for(i=0; i<10; i++)
  {
    scanf("%d", &B);
    count15to55(B);
    getch();
  }
}
int counte(char word[]);
{
  int i,len=strlen(word), count=0;
  for (i=0;i<len; i++)
  if(word[i]=='e') count++;
  return=count;
}
void count15to55(int A[])
{
  int i, count=0;
  for(i=0; i<10; i++)
    if (A[i]>=15 && A[i]<=55)
    count++;
  printf("\nTotal count of numbers between 15t and 55 :%d",count);
}