//program in C that replace occurance of e by x in input string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void replaceE(char[]); 

void main()
{
  char word[10];
  printf("Enter the word: ");
  scanf("%s",word);
  replaceE(word);
  printf("\nModified word:%s",word);
  getch();
}
  void replaceE(char str[])
  {
    int len= strlen(str);
    int i;
    for(i=0; i<len; i++)
    {
      if(str[i]=='e')
      {
        str[i]='X';
      }
    }
  }