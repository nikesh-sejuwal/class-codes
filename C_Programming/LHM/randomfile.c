#include <stdio.h>
#include <conio.h>

void main()
{
  char ch;
  FILE *fp = fopen("randomtest.txt", "w+");
  fputs("This is BSC csit", fp);

  fseek(fp, 7, SEEK_SET);
  fputs(" C programming.", fp);
  printf("Current position of the pointer is %d", ftell(fp));

  rewind(fp);
  printf("Current position of the pointer is %d", ftell(fp));

  while (1)
  {
    ch = fgetc(fp);
    if (feof(fp))
    {
      break;
    }
    printf("%c", ch);
  }
  fclose(fp);
  getch();
}
