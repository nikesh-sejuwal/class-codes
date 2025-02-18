#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5

void push();
void pop();
void display();
int TOP = -1;
int stack[SIZE];

int main()
{
  int choice;
  system("cls");
  printf("<<--------:PUSH , POP and Displaying items:-------->>\n\n");
  printf("\t 1. PUSH\n");
  printf("\t 2. POP\n");
  printf("\t 3. DISPLAY LIST\n");
  printf("\t 4. EXIT\n\n");

  while (1)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);

    switch (choice)
    {
    case 1:
      push();
      break;

    case 2:
      pop();
      break;

    case 3:
      display();
      break;

    case 4:
      printf(" ;)   Thank you    (;");
      exit(0);
      break;

    default:
      printf("Invalid input");
    }
  }
}
void push()
{
  int item;
  if (TOP == SIZE - 1)
  {
    printf("\n\nStack is FULL!! \n");
    // exit(0);
  }
  else
  {
    printf("Enter input: ");
    scanf("%d", &item);
    printf("\n");
    TOP += 1;
    stack[TOP] = item;
  }
}

void pop()
{
  int item;
  if (TOP == -1)
  {
    printf("\n\nStack is EMPTY.!!\n");
  }
  else
  {
    printf("POPPED %d\n", stack[TOP]);
    printf("\n");
    TOP = TOP - 1;
  }
}

void display()
{
  int i;
  if (TOP >= 0)
  {
    printf("\nStack elements are: \n");
    for (i = TOP; i >= 0; i--)
    {
      printf("%d\n", stack[i]);
    }
    printf("\n");
  }
  else
    printf("\n\nStack is empty\n");
}