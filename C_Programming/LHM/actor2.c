#include <stdio.h>
#include <conio.h>
#include <string.h>

struct actor
{
  int id, age;
  char name[20], genre[20], country[20];
  float salary;
};

void showallactor(struct actor list[], int k)
{
  int i;
  printf("\n ID\t\tname\t\tgenre\t\tAge\t\tCountry\t\tSalary");
  printf("\n --\t\t----\t\t-----\t\t---\t\t-------\t\t------");

  for (i = 0; i < k; i++)
  {
    printf("\n%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%f", list[i].id, list[i].name, list[i].genre, list[i].age, list[i].country, list[i].salary);
  }
}

void search(struct actor list[], int k, char q[])
{
  printf("\n-----------------------------------------------------------------------------------------------\n");
  printf("Actors from UK  are as listed below:-\n");

  printf("\n ID\t\tname\t\tgenre\t\tAge\t\tCountry\t\tSalary");
  printf("\n --\t\t----\t\t-----\t\t---\t\t-------\t\t------");
  for (int i = 0; i < k; i++)
  {
    if (strcmp(q, list[i].country) == 0)
      printf("\n%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%f", list[i].id, list[i].name, list[i].genre, list[i].age, list[i].country, list[i].salary);
  }
}

void bubblesort(struct actor list[], int k)
{

  int i, j;
  float temp;
  FILE *fp = fopen("actor2.txt", "w");
  for (i = 0; i < k - 1; i++)
  {
    for (j = 0; j < k - 1 - i; j++)
    {
      if (list[j].salary < list[j + 1].salary)
      {
        temp = list[j].salary;
        list[j].salary = list[j + 1].salary;
        list[j + 1].salary = temp;
      }
    }
  }
  for (i = 0; i < k; i++)
  {
    fprintf(fp, "%d %s %s %d %s %f\n", list[i].id, list[i].name, list[i].genre, list[i].age, list[i].country, list[i].salary);
  }
  fclose(fp);
}
void main()
{
  int k = 0;
  FILE *fp = fopen("actor2.txt", "r");
  struct actor temp;
  struct actor list[40];

  if (fp == NULL)
  {
    printf("The reading in the file is unsuccessful");
  }
  while (fscanf(fp, "%d %s %s %d %s %f", &temp.id, temp.name, temp.genre, &temp.age, temp.country, &temp.salary) == 6)
  {
    list[k] = temp;
    k++;
  }
  fclose(fp);
  bubblesort(list, k);
  printf("%d", 123);

  showallactor(list, k);
  search(list, k, "UK");
}