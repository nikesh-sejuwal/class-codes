#include <stdio.h>
#include <string.h>

int main()
{
  char str[10], f = 'a';
  int i = 0;
  printf("Enter the string to be checked: ");
  scanf("%s", str);
  while (str[i] != '\0')
  {
    switch (f)
    {
    case 'a':
      if (str[i + 1] == '\0' && str[i] == '1')
      {
        f = 'c';
      }
      else if (str[i + 2] == '\0')
      {
        if (str[i] == '0')
          f = 'b';
        else if (str[i] == '1')
          f = 'a';
      }
      else
      {
        if (str[i] == '0')
          f = 'b';
        else if (str[i] == '1')
          f = 'a';
        i++;
      }
      break;
    case 'b':
      if (str[i] == '0')
        f = 'd';
      else if (str[i] == '1')
        f = 'c';
      i++;
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
