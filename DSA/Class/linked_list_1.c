#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};
struct node *HEAD = NULL;
struct node *TAIL = NULL;

struct node *createNode()
{
  struct node *p = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter data: ");
  scanf("%d", &p->data);
  p->next = NULL;
  return p;
};

void insertFront()
{
  struct node *p = createNode();
  if (HEAD == NULL)
    HEAD = p;
  else
  {
    p->next = HEAD;
    HEAD = p;
  }
}

void insertEnd()
{
  struct node *temp;
  struct node *p = createNode();
  if (HEAD == NULL)
  {
    HEAD = p;
  }
  else
  {
    temp = HEAD;
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = p;
  }
}

void insertBefore(int k)
{
  int flag = 0;
  struct node *p, *temp1, *temp2;
  if (HEAD == NULL)
  {
    printf("\n Insertion not possible %d doesnot exit", k);
    getch();
    return;
  }
  temp1 = HEAD->next;
  temp2 = HEAD;
  while (temp1 != NULL)
  {
    if (temp1->data == k)
    {
      flag = 1;
      break;
    }
    temp2 = temp1;
    temp1 = temp1->next;
  }
  if (flag == 0)
  {
    printf("\n %d doesn't exist", k);
    getch();
    return;
  }
  p = createNode();
  p->next;
  temp1;
  temp2->next = p;
}

void insertAfter()

    struct node *HEAD = NULL;

void main()
{
  insertEnd();
}