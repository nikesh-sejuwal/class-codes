#include <stdio.h>
#include <conio.h>

int autoID();

void main()
{
  int id = autoID();
  printf("\n %d", id);
  getch();
}

int autoID()
{
  FILE *fp;
  int char_max = 0, mid;
  char name[20];
  fp = fopen("auto.txt", "r");
  if (fp == NULL)
  {
    printf("Invalid in reading");
  }
  while (fscanf(fp, "%d %s", &mid, name) == 2)
  {
    if (mid > char_max)
      char_max = mid;
  }
  return char_max + 1;
  fclose(fp);
}