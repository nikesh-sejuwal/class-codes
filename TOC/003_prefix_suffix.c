#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  int i, j;
  char name[20];
  printf("Enter the word for prefix or suffix: ");
  scanf("%s", name);
  int len = strlen(name);
  printf("\t\tPREFIX\n");
  for (i = len; i >= 0; i--)
  {
    for (j = 0; j < i; j++)
    {
      printf("%c", name[j]);
    }
    printf("\n");
  }
  printf("\n\n\t\tSUFFIX\n");
  for (i = 0; i < len; i++)
  {
    for (j = i; j < len; j++)
    {
      printf("%c", name[j]);
    }
    printf("\n");
  }
}
