#include <stdio.h>
#include <conio.h>

struct actor
{
  int id, age;
  char name[40], genre[20], country[20];
  float salary;
};
void displayall(struct actor[], int);
void main()
{
  FILE *fp = fopen("actor.txt", "r");
  struct actor temp;
  struct actor list[20];

  int k = 0;
  if (fp = NULL)
  {
    printf("Invalid input in reading");
  }
  while (fscanf(fp, "%d %s %s %d %s %f", &temp.id, temp.name, temp.genre, &temp.age, temp.country, &temp.salary) == 6)
  {
    list[k] = temp;
    k++;
  }
  fclose(fp);
  displayall(list, k);
}
void displayall(struct actor list[], int i)
{
  int k;
  for (k = 0; k < i; k++)
  {
    printf("%d %s %s %d %s %f", list[k].id, list[k].name, list[k].genre, list[k].age, list[k].country, list[k].salary);
  }
}