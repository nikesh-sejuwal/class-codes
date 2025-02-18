#include <stdio.h>
#include <conio.h>
struct actor
{
  int id, age;
  char name[40], genre[20], country[40];
  float salary;
};
void displayallactors(struct actor[], int);
void main()
{
  int k = 0, i;
  FILE *fp = fopen("actor.txt", "r");
  struct actor list[20];
  struct actor tmp;
  if (fp == NULL)
  {
    printf("File Open Error!");
  }
  while (fscanf(fp, "%d %s %s %d %s %f", &tmp.id, tmp.name, tmp.genre, &tmp.age, tmp.country, &tmp.salary) != EOF)
  {
    list[k] = tmp;
    k++;
  }
  fclose(fp);
  displayallactors(list, k);
}
void displayallactors(struct actor list[], int k)
{
  int i;
  printf("\nID\t\tName\t\tGenre\t\tAge\t\tCountry\t\tSalary\n");
  printf("--\t\t----\t\t-----\t\t---\t\t-------\t\t------\n");
  for (i = 0; i < k; i++)
  {
    printf("%d\t\t%s\t\t%s\t\t%d\t\t%s\t\t%f\n", list[i].id, list[i].name, list[i].genre, list[i].age, list[i].country, list[i].salary);
  }
  getch();
}