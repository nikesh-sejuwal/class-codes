#include <stdio.h>
#include <conio.h>
int findmaxsalary()
{
  int id, temp_id;
  char name[20];
  float salary, f_max = 0.0;
  FILE *fp = fopen("auto.txt", "r");
  if (fp == NULL)
  {
    printf("Invalid reading");
  }
  while (fscanf(fp, "%d %s %f\n", &id, name, &salary) == 3)
    if (salary > f_max)
    {
      f_max = salary;
      temp_id = id;
    }
  fclose(fp);
  return temp_id;
}

void transfermaxsalary(int x)
{
  FILE *fp = fopen("auto", "r");
  FILE *p = fopen("temp.txt", "a");
  int id, k;
  float salary;
  char name[20];
  if (fp == NULL)
  {
    printf("INVALID");
  }
  while (fscanf(fp, "%d %s %f\n", &id, name, &salary) == 3)
  {
    if (id == k)
    {
      fprintf(p, "\n%d %s %f", id, name, salary);
      fclose(p);
      fclose(fp);
      return;
    }
  }
}

void removemaxsalary(int k)
{
  FILE *fp = fopen("auto.txt", "r");
  FILE *p = fopen("temp.txt", "a");
  int id;
  float salary;
  char name[30];
  while (fscanf(fp, "%d %s %f\n", &id, name, &salary) == 3)
  {
    if (id != k)
    {
      fprintf(p, "\n%d %s %f", id, name, salary);
    }
  }
  fclose(p);
  fclose(fp);
  remove("auto.txt");
  rename("temp.txt", "auto.txt");
}

void displayuser()
{
  char ch;
  FILE *p = fopen("temp.txt", "r");
  if (p == NULL)
  {
    printf("Invalid input in reading");
  }
  while ((ch = fgetc(p)) != EOF)
    printf("%c", ch);
  fclose(p);
}

void main()
{
  FILE *fp = fopen("auto.txt", "r");
  int id, count = 0;
  float salary;
  int temp_id;
  char name[30];
  while (fscanf(fp, "%d %s %f\n", &id, name, &salary) == 3)
  {
    count++;
    fclose(fp);
  }
  do
  {
    temp_id = findmaxsalary();
    transfermaxsalary(temp_id);
    removemaxsalary(temp_id);
  } while (count > 0);
  displayuser();
}