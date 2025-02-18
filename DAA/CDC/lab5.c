#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isKeyword(char *str)
{
  char *keywords[] = {"if", "for", "else", "while", "switch"};
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(str, keywords[i]) == 0)
      return 1;
  }
  return 0;
}

int isIdentifier(char *str)
{
  if (!(isalpha(str[0]) || str[0] == '_'))
    return 0;
  for (int i = 1; str[i] != '\0'; i++)
  {
    if (!(isalnum(str[i]) || str[i] == '_'))
      return 0;
  }
  return 1;
}

int isNumber(char *str)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (!isdigit(str[i]))
      return 0;
  }
  return 1;
}

int main()
{
  FILE *fp = fopen("lab5text.txt", "r");
  if (fp == NULL)
  {
    printf("File cannot be opened\n");
    return 0;
  }

  char c, buffer[50];
  int j = 0;

  while ((c = fgetc(fp)) != EOF)
  {

    if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '(' || c == ')')
    {
      if (j != 0)
      {
        buffer[j] = '\0';
        j = 0;

        if (isKeyword(buffer))
        {
          printf("Keyword: %s\n", buffer);
        }
        else if (isIdentifier(buffer))
        {
          printf("Identifier: %s\n", buffer);
        }
        else if (isNumber(buffer))
        {
          printf("Number: %s\n", buffer);
        }
        else
        {
          printf("Unknown token: %s\n", buffer);
        }
      }

      if (c == ' ' || c == '\t' || c == '\n')
      {
        continue;
      }
    }
    else
    {
      buffer[j++] = c;
    }
  }

  fclose(fp);
  return 0;
}