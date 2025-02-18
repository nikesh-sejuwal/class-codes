#include <stdio.h>
#include <conio.h>
#include <string.h>

int authenticate(char[], char[]);
void menu();
int main()
{
  int result;
  char username[20], password[20];
  do
  {
    printf("Enter the username: \n");
    gets(username); fflush(stdin);

    printf("Enter the password: \n");
    gets(password); fflush(stdin);
    result=authenticate(username, password);
  }
  while(result!=1);
  menu();
}
 
 int authenticate(char u[], char p[])
 {
  char un[20], pas[20];
  int id;

  FILE *fp;
  fp=fopen("user.txt", "r");
  if(fp==NULL)
  {
    printf("file open error!\n");
    getch(); 
  }
  while(fscanf(fp,"%d %s %s",&id, un,pas)==3)
  {
    if(strcmp(un,u)==0 && strcmp(pas,p)==0)
    return 1;
  }
  return 0;
  
 }
 void menu()
 {
  printf("\nLMS\n");
  printf("\n 1. Add user \n");
  printf("\n 2. Detect user \n");
  printf("\n 2. Logout \n");
 }
