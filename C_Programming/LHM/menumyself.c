#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

void prompt();
int login();

void main()
{
  prompt();
}

void prompt()
{
  {
    do
    {
      int choice;
      system("cls");
      printf("\033[31m\033[0;12H ---------------------------");
      printf("\033[2;15H  Leave Management System");
      printf("\033[3;12H ---------------------------");

      printf("\033[5;20H 1. LOGIN \n");
      printf("\033[6;20H 2. EXIT \n\033[0m");
      printf("\033[35m\033[7;20H Enter your option.  ");
      scanf("%d", &choice);

      switch (choice)
      {
      case 1:
        login();
        break;
      case 2:
        exit;
        return;
      default:
        printf("invalid input");
        break;
      }
    } while (0);
  }
}

int login()
{

  char username[20], password[10];
  system("cls");
  printf("Enter username: ");
  scanf("%s", username);
  printf("Enter password: ");
  scanf("%s", password);

  FILE *fp = fopen("apple.txt", "r");
  {
    char un[20], pas[10];
    if (fp == NULL)
    {
      printf("Reading file is unsuccessful.");
    }
    while (fscanf(fp, "%s %s", un, pas) == 2)
    {
      if (strcmp(un, username) == 0 && strcmp(pas, password) == 0)
        printf("success");
    }
  }
  printf("Unsucess");
}
