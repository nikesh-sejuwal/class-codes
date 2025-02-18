#include <stdio.h>
#include <conio.h>

void main()
{
  char name[10], password[10];
  int id;
  FILE *fp = fopen("user.txt", "r");
  FILE *tmp = fopen("tmp.txt", "w");

  if (fp == NULL)
  {
    printf("File reading in C is unsuccessful.");
  }

  while (fscanf(fp, "%d %s %s", &id, name, password) == 3)
  {
    if (password[0] != 'm')
    {
      fprintf(tmp, "%d %s %s\n", &id, name, password);
    }
    fclose(fp);
    fclose(tmp);
    remove("user.txt");
    rename("temp.txt", "user.txt");
    getch();
  }
}