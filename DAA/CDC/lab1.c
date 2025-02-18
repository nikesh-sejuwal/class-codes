#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *file_ptr;
  char ch;

  file_ptr = fopen("file.txt", "r");
  if (file_ptr == NULL)
  {
    printf("File cannot be found");
    return 1;
  }

  int flag = 0;
  int current = 0;

  while ((ch = fgetc(file_ptr)) != EOF)
  {
    if (ch == '/')
    {
      ch = fgetc(file_ptr);
      if (ch == '/')
      {
        current = 1;
        while ((ch = fgetc(file_ptr)) != '\n' && ch != EOF);
      }
      else if (ch == '*')
      {
        flag = 1;
        while ((ch = fgetc(file_ptr)) != EOF)
        {
          if (ch == '*')
          {
            ch = fgetc(file_ptr);
            if (ch == '/')
            {
              flag = 0;
              break;
            }
          }
        }
      }
    }
  }

  fclose(file_ptr);

  if (current == 1)
  {
    printf("There is a single-line comment in the file\n");
  }
  if (flag == 0 && current == 0)
  {
    printf("There is no comment in the file\n");
  }
  if (flag == 0 && current == 1)
  {
    printf("There is a multi-line comment in the file\n");
  }

  return 0;
}
