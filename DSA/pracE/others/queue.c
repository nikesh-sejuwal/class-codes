#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SIZE 5

int front = -1;
int rear = -1;
int queue[SIZE];

int isFull()
{
  return (front == (rear + 1) % SIZE) ? 1 : 0;
}
int isEmpty()
{
  return (rear == -1 && front == -1) ? 1 : 0;
}

void Enqueue(int k)
{
  if (isFull())
  {
    printf("Queue is full");
  }
  if (isEmpty())
  {
    rear = front = 0;
  }
  else
  {
    rear = (rear + 1) % SIZE;
  }
  queue[rear] = k;
}

int Dequeue()
{
  int temp;
  if (isEmpty())
  {
    printf("Queue is Empty");
  }
  if (rear == front)
  {
    temp = queue[front];
    front = rear = -1;
  }
  else
  {
    temp = queue[front];
    front = (front + 1) % SIZE;
  }
  return temp;
}

void display()
{
  int i = front;
  if (isEmpty())
  {
    printf("Nothing to delete");
  }
  else
  {
    while (i != rear)
    {
      printf("%d \n", queue[i]);
      i = (i + 1) % SIZE;
    }
    printf("%d ", queue[i]);
  }
}

int main()
{
  int res, n, choice;
  system("cls");
  printf("-----------QUEUE----------");
  printf("\n1.ENQUEUE");
  printf("\n2.deQUEUE");
  printf("\n3.display");
  printf("\n4.exit");

  while (1)
  {
    printf("\nEnter your choice ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
    {
      if (isFull())
      {
        printf("FULL");
        break;
      }
      else
      {
        printf("Enter the number: ");
        scanf("%d", &n);
        Enqueue(n);
        printf("Successfully added");
        break;
      }
    }

    case 2:
    {
      if (isEmpty())
      {
        printf("Nothing");
        break;
      }
      else
      {
        res = Dequeue();
        printf("\n%d is dequeued: ", res);
        break;
      }
    }
    case 3:
      printf("Lists are: \n");
      display();
      break;

    case 4:
      printf("OK byee");
      exit(0);
      break;

    default:
      printf("\nenter valid input");
    }
  }
}