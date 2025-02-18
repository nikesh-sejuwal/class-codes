#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define SIZE 5
int front = -1;
int rear = -1;
int QUEUE[SIZE];

int isFull()
{
  return ((rear + 1) % SIZE == front) ? 1 : 0;
}
int isEmpty()
{
  return (rear == -1 && front == -1) ? 1 : 0;
}

void enqueue(int k)
{
  if (isFull())
  {
    printf("Queue is full\n");
  }
  if (isEmpty())
  {
    rear = front = 0;
  }
  else
  {
    rear = (rear + 1) % SIZE;
  }
  QUEUE[rear] = k;
}

int dequeue()
{
  int temp;
  if (isEmpty())
  {
    printf("Nothing to delete\n");
  }
  if (rear == front)
  {
    temp = QUEUE[front];
    front = rear = -1;
  }
  else
  {
    temp = QUEUE[front];
    front = (front + 1) % SIZE;
  }
  return temp;
}

void display()
{
  int i = front;
  if (isEmpty())
  {
    printf("Nothing to Show\n");
  }
  else
  {
    while (i != rear)
    {
      printf("%d \n", QUEUE[i]);
      i = (i + 1) % SIZE;
    }
    printf("%d \n", QUEUE[i]);
  }
}

int main()
{
  int choice, n, res;
  system("cls");
  printf("\n Array based linear Queue\n");
  printf("\n1. ENQUEUE \n");
  printf("\n2. DEQUEUE \n");
  printf("\n3. DISPLAY \n");
  printf("\n4. EXIT \n");

  while (1)
  {
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);

    switch (choice)
    {
    case 1:
      if (isFull())
      {
        printf("the enqueue is full.\n");
        break;
      }
      else
      {
        printf("Enter the element: ");
        scanf("%d", &n);
        enqueue(n);
        printf("Successfully added the element\n");
        break;
      }
    case 2:
      if (isEmpty())
      {
        printf("Queue is empty.");
        break;
      }
      else
      {
        res = dequeue();
        printf("%d is successfully removed\n", res);
        break;
      }
    case 3:

      printf("The list item is :\n");
      display();
      break;

    case 4:
      printf("  Thank you");
      exit(0);
      break;

    default:
      printf("Invalid input");
    }
  }
}