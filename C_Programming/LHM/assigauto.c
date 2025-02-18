#include <stdio.h>
#include <conio.h>
void newid();
void main()
{
  int choose;
  do
  {
    printf("1. Create new id");
    printf("2. Stop");
    scanf("%d", &choose);
    switch (choose)
    {
    case 1:
      newid();
      break;
    case 2:
      printf("Stoping making id");
      break;
    default:
      printf("invalid input");
    }
  } while (1);
}

void newid()
{
  int id;
  char name[20];
  FILE *fp = fopen("auto.txt", "ra");
  if (fp == NULL)
  {
    printf("Invalid statement");
  }
  printf("\n Enter user details: \n");
  printf("\n ID: ");
  scanf("%d", &id);
  fflush(stdin);
  printf("\n Name: ");
  gets(name);
  fflush(stdin);
  fprintf(fp, "%d %s", &id, name);
  printf("Written successfully");
  fclose(fp);
}