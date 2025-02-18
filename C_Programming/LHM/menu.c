#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int authenticate(char[], char[]);
void adminmenu();
void managermenu();
void employeemenu();
void addemp();
void viewemp();
void modifyemp();
void deleteemp();
void viewcalender();

int main()

{
  int result;
  char username[10], password[10];
  do
  {
    system("cls");
    printf("\033[0;15H Enter the username: ");
    gets(username);
    fflush(stdin);

    printf("\n\033[3;15H Enter the password: ");
    gets(password);
    fflush(stdin);
    result = authenticate(username, password);
  } while (result == 0);

  if (result == 1)
    adminmenu();

  else if (result == 2)
    managermenu();
  else if (result == 3)
    employeemenu();
  // printf("%d", result);
  else
    return 0;
  getch();
}

int authenticate(char u[], char p[])
{
  char un[20], pas[20], role[10];
  int id;

  FILE *fp;
  fp = fopen("user.txt", "r");
  if (fp == NULL)
  {
    printf("file open error!\n");
    getch();
  }
  while (fscanf(fp, "%d %s %s %s ", &id, un, pas, role) == 4)
  {
    if (strcmp(un, u) == 0 && strcmp(pas, p) == 0)
    {
      if (strcmp(role, "admin") == 0)
        return 1;

      else if (strcmp(role, "manager") == 0)
        return 2;
      else if (strcmp(role, "employee") == 0)
        return 3;
    }
  }
}

void adminmenu()
{
  do
  {
    int choice;
    system("cls");
    printf("\033[0;12H ---------------------------");
    printf("\033[2;15H        ADMIN PANNEL");
    printf("\033[3;12H ---------------------------");

    printf("\033[5;15H 1. :Add employee account: \n");
    printf("\n\033[6;15H 2. :Delete employee account: \n");
    printf("\n\033[7;15H 3. :Modify employee account: \n");
    printf("\n\033[8;15H 4. :View employee account: \n");
    printf("\n\033[9;15H 5. :View leave calender: \n");

    printf("\n\033[12;15H Choose your option. ");
    scanf("%d", &choice);
    fflush(stdin);

    switch (choice)
    {
    case 1:
      addemp();
      printf("\nAdded successfully");
      break;
    case 2:
      deleteemp();
      break;
    case 3:
      modifyemp();
      break;
    case 4:
      viewemp();
      break;
    case 5:
      viewcalender();
      break;
      return;
    default:
      printf("\n\n invalid input\n");
      break;
    }
    getch();
  } while (1);
}

void managermenu()
{
  do
  {
    int choice;
    system("cls");
    printf("\033[0;12H ---------------------------");
    printf("\033[2;15H       MANAGER PANNEL");
    printf("\033[3;12H ---------------------------");

    printf("\033[5;15H 1. :Create leave calander: \n");
    printf("\n\033[6;15H 2. :Edit leave calender: \n");
    printf("\n\033[7;15H 3. :Applies for leave: \n");
    printf("\n\033[8;15H 4. :view personal information: \n");
    printf("\n\033[9;15H 5. :View calender: \n");
    printf("\n\033[10;15H 6. :Add/ remove leave categories: \n");
    printf("\n\033[11;15H 7. :approve/ disapprove leave application of employees: \n");

    printf("\n\033[14;15H Choose your option. ");
    scanf("%d", &choice);
    fflush(stdin);

    switch (choice)
    {
    case 1:
      printf("Create leave calender ");
      break;
    case 2:
      printf("Edit leave calender ");
      break;
    case 3:
      printf("Applies for leave");
      break;
    case 4:
      printf("view personal information ");
      break;
    case 5:
      printf("View calender");
      break;
    case 6:
      printf("add/remove leave categories");
      break;
    case 7:
      printf("approve/disapprove leave application of employees");
      break;
      return;
    default:
      printf("\n\n invalid input\n");
      break;
    }
    getch();
  } while (2);
}

void employeemenu()
{
  printf("was here");
  do
  {
    int choice;
    system("cls");
    printf("\033[0;12H ---------------------------");
    printf("\033[2;15H      EMPLOYEE PANNEL");
    printf("\033[3;12H ---------------------------");

    printf("\033[5;15H 1. :View the leave calender: \n");
    printf("\n\033[6;15H 2. :applies for leave: \n");
    printf("\n\033[7;15H 3. :view own personal information: \n");
    printf("\n\033[8;15H 4. :receives notification about leave application: \n");
    printf("\n\033[9;15H 5. :View leave status: \n");

    printf("\n\033[12;15H Choose your option. ");

    scanf("%d", &choice);
    fflush(stdin);

    switch (choice)
    {

    case 1:
      viewcalender();
      break;
    case 2:
      adminmenu();
      break;
    case 3:
      printf("View own personal information");
      break;
    case 4:
      printf("Receives notification about leave application ");
      break;
    case 5:
      printf("View leave status");
      break;
      return;
    default:
      printf("\n\n invalid input\n");
      break;
    }
    getch();
  } while (3);
}

void addemp()
{
  int id;
  long long int phone, dob;
  float salary;
  char name[20], address[30];
  FILE *fp = fopen("employee.txt", "a");
  if (fp == NULL)
  {
    printf("Append file unsuccessful.");
  }
  system("cls");
  printf("Enter name: ");
  gets(name);
  fflush(stdin);
  printf("Enter id: ");
  scanf("%d", &id);
  fflush(stdin);
  printf("Enter the address: ");
  gets(address);
  fflush(stdin);
  printf("Enter the salary: ");
  scanf("%f", &salary);
  fflush(stdin);
  printf("Enter date of birth(ddmmyear): ");
  scanf("%d", &dob);
  fflush(stdin);
  printf("Enter phone number: ");
  scanf("%lld", &phone);
  fflush(stdin);

  fprintf(fp, "%s %d %s %f %lld %lld\n", name, id, address, salary, dob, phone);
  fclose(fp);
}

void viewemp()
{
  int id, a;
  long long int phone, dob;
  float salary;
  char name[20], address[30];
  system("cls");

  FILE *fp = fopen("employee.txt", "r");
  if (fp == NULL)
  {
    printf("Invalid input in reading");
  }
  while (fscanf(fp, "%s %d %s %f %lld %lld", name, &id, address, &salary, &dob, &phone) != EOF)
  {
    printf("%s %d %s %f %lld %lld\n", name, id, address, salary, dob, phone);
  }
  fclose(fp);
}

void modifyemp()
{
  int id, a;
  long long int phone, dob;
  float salary;
  char name[20], address[30];
  system("cls");

  FILE *fp = fopen("employee.txt", "r");
  FILE *k = fopen("temp.txt", "w");
  printf("Enter the employee id to be modified: ");
  scanf("%d", &a);

  if (fp == NULL)
  {
    printf("Invalid input in reading");
  }
  while (fscanf(fp, "%s %d %s %f %lld %lld", name, &id, address, &salary, &dob, &phone) != EOF)
  {
    if (id == a)
    {
      fflush(stdin);
      printf("Enter new name: ");
      gets(name);
      fflush(stdin);
      printf("Enter the new address: ");
      gets(address);
      fflush(stdin);
      printf("Enter the new salary: ");
      scanf("%f", &salary);
      fflush(stdin);
      printf("Enter new date of birth(ddmmyear): ");
      scanf("%d", &dob);
      fflush(stdin);
      printf("Enter new phone number: ");
      scanf("%lld", &phone);

      fprintf(k, "%s %d %s %f %lld %lld\n", name, id, address, salary, dob, phone);
    }
    else
    {
      fprintf(k, "%s %d %s %f %lld %lld\n", name, id, address, salary, dob, phone);
    }
  }
  fclose(fp);
  fclose(k);
  remove("employee.txt");
  rename("temp.txt", "employee.txt");
}

void deleteemp()
{
  int id, a;
  long long int phone, dob;
  float salary;
  char name[20], address[30];
  system("cls");

  FILE *fp = fopen("employee.txt", "r");
  FILE *k = fopen("temp.txt", "w");
  printf("Enter the employee id to be deleted: ");
  scanf("%d", &a);

  if (fp == NULL)
  {
    printf("Invalid input in reading");
  }
  while (fscanf(fp, "%s %d %s %f %lld %lld", name, &id, address, &salary, &dob, &phone) != EOF)
  {
    if (id == a)
    {
      continue;
    }
    else
      fprintf(k, "%s %d %s %f %lld %lld\n", name, id, address, salary, dob, phone);
  }
  fclose(fp);
  fclose(k);
  remove("employee.txt");
  rename("temp.txt", "employee.txt");
}

void applyleave()
{
  int i, id, day, month;
  long long int phone, dob;
  float salary;
  char name[20], address[30], leave[20], reason[200];
  system("cls");

  printf("Enter employee ID: ");
  scanf("%d", &i);

  FILE *fp = fopen("employee.txt", "r");
  FILE *a = fopen("applyleave.txt", "w");
  if (fp == NULL)
  {
    printf("Invalid statement in reading and writing");
  }
  while (fscanf(fp, "%s %d %s %f %lld %lld", name, &id, address, &salary, &dob, &phone) != EOF)
  {
    if (id == i)
    {
      printf("Enter today's month(1-12): ");
      scanf("%d", &month);

      printf("Enter today's day(1-31): ");
      scanf("%d", &day);

      printf("Which leave are you applying for: ");
      scanf("%s", leave);

      printf("Reason for the leave: ");
      gets(reason);
    }
  }
}

void viewcalender()
{
  system("cls");
  char ch;
  FILE *fp = fopen("calender.txt", "r");

  if (fp == NULL)
  {
    printf("reading file unsuccessful");
  }
  while ((ch = fgetc(fp)) != EOF)
    printf("%c", ch);
  fclose(fp);
}
/*
 */