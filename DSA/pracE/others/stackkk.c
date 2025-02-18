#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
int TOP = -1;
int stack[SIZE];

int isFull()
{
  if (TOP == SIZE - 1)
  {
    return 1;
  }
  else
    return 0;
}

int isEmpty()
{
  if (TOP == -1)
  {
    return 1;
  }
  else
    return 0;
}

void push()
{
  int item;
  if (isFull())
  {
    printf("Stack is  full");
  }
  else
  {
    printf("\n Enter the item to be stored: ");
    scanf("%d", &item);
    TOP = TOP + 1;
    stack[TOP] = item;
  }
}

void pop()
{
  if (isEmpty())
  {
    printf("Stack is empty");
  }
  else
  {
    printf("%d is popped\n", stack[TOP]);
    TOP = TOP - 1;
  }
}

void displayTop()
{
  if (TOP == -1)
  {
    printf("Nothing in stack\n");
  }
  else
  {
    printf("TOP = %d", stack[TOP]);
  }
}

void display()
{
  if (isEmpty())
  {
    printf("Nothing to Display");
  }
  else
  {
    printf("ITEMS ARE\n");
    for (int i = TOP; i >= 0; i--)
    {
      printf("%d\n", stack[i]);
    }
  }
}

int main()
{
  int choice;
  system("cls");
  printf("------------STACK--------------");
  printf("\n1. PUSH");
  printf("\n2. POP");
  printf("\n3. DISPLAY");
  printf("\n4. EXIT");
  while (1)
  {
    printf("\nEnter your choice: ");
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
      displayTop();
      break;

    default:
      printf("Invalid Input");
      break;
    }
  }
}