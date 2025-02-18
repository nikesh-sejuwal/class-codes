#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 5

int TOP = -1;
int stack[SIZE];

void push();
void pop();
void display();
int isFull();
int isEmpty();

int main()
{
  int choice;
  system("cls");
  printf("OPERATIONS \n");
  printf("1. PUSH \n");
  printf("1. POP \n");
  printf("1. DISPLAY \n");
  printf("1. EXIT \n");

  while (1)
  {
    printf("Enter yout choice\n");
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
      printf("OKEY BYEE");
      exit(0);

    default:
      break;
    }
  }
}

int isFull()
{
  if (TOP == SIZE - 1)
  {
    return 1;
  }
  return 0;
}

void push()
{
  int item;
  if (isFull())
  {
    printf("stack is full");
  }
  else
  {
    printf("Enter the data to be inserted: \n");
    scanf("%d", &item);
    TOP = TOP + 1;
    stack[TOP] = item;
  }
}

int isEmpty()
{
  if (TOP == -1)
  {
    return 1;
  }
  return 0;
}

void pop()
{
  if (isEmpty())
  {
    printf("Stack is empty \n");
  }
  else
  {
    printf("Popped item %d\n", stack[TOP]);
    TOP = TOP - 1;
  }
}

void display()
{
  int i;
  if (isEmpty())
  {
    printf("Stack is empty\n");
    ;
  }
  else
  {
    printf("The list is given below: \n");

    for (i = TOP; i >= 0; i--)
    {
      printf("%d \n", stack[i]);
    }
  }
}