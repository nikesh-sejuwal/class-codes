#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
  char str[10], f = 'a';
  int i;
  printf("Enter the string to be checked: ");
  scanf("%s", str);
  for (i = 0; str[i] != '\0'; i++)
  {
    switch (f)
    {
    case 'a':
      if (str[i + 2] == '\0')
      {
        break;
      }
      else
      {
        if (str[i] == '0')
          f = 'b';
        else if (str[i] == '1')
          f = 'a';
      }
      break;
    case 'b':
      if (str[i] == '0')
        f = 'd';
      else if (str[i] == '1')
        f = 'c';
      break;
    default:
      break;
    }
  }
  if (f == 'c')
    printf("String is accepted");
  else
    printf("String is not accepted");
  return 0;
}