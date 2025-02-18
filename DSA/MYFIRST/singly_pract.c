#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

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
  printf("Enter the data item: ");
  scanf("%d", &p->data);
  p->next = NULL;
  return p;
}

// Insert node at the head section
void insertFront()
{
  struct node *p = createNode();
  if (HEAD == NULL)
  {
    HEAD = TAIL = p;
  }
  else
  {
    p->next = HEAD;
    HEAD = p;
  }
}

void insertEnd()
{
  struct node *p = createNode();
  if (HEAD == NULL)
  {
    HEAD = TAIL = NULL;
  }
  else
  {
    TAIL->next = p;
    TAIL = p;
  }
}

void insertBefore(int k)
{
  struct node *p, *temp1, *temp2;
  int flag = 0;
  if (HEAD == NULL)
  {
    printf("Nothing, Can't insert before\n");
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
    printf("%d isn't available to insert before. ", k);
    return;
  }
  p = createNode();
  p->next = temp1;
  temp2->next = p;
}

void insertAfter(int k)
{
  struct node *p, *temp1;
  int flag = 0;
  if (HEAD == NULL)
  {
    printf("Nothing at before to insert after ");
    return;
  }
  temp1 = HEAD;
  while (temp1 != NULL)
  {
    if (temp1->data == k)
    {
      flag = 1;
      break;
    }
    temp1 = temp1->next;
  }
  if (flag == 0)
  {
    printf("%d cannot be found", k);
    return;
  }
  p = createNode();
  p->next = temp1->next;
  temp1->next = p;
}

// Delete HEAD of the list
void deleteTop()
{
  if (HEAD == NULL)
  {
    printf("Empty list, Nothing to delete\n");
    return;
  }
  struct node *temp = HEAD;
  HEAD = temp->next;
  printf("%d is deleted", temp->data);
  free(temp);
}

void deleteEnd()
{
  if (HEAD == NULL)
  {
    printf("Nothing to delete \n");
    return;
  }
  struct node *current = HEAD;
  struct node *previous = NULL;
  while (current->next != NULL)
  {
    previous = current;
    current = current->next;
  }
  if (previous != NULL)
  {
    previous->next = NULL;
    TAIL = previous;
  }
  else
  {
    HEAD = TAIL = NULL;
  }
  printf("%d is deleted which was at end\n", current->data);
  free(current);
}

// Display data
void display()
{
  struct node *temp = HEAD;
  while (temp != NULL)
  {
    printf("%d -> ", temp->data);
    temp = temp->next;
  }
  printf("NULL \n");
}

int main()
{
  int choice, n, m, res;
  system("cls");
  printf("..............Linked list..................\n");
  printf("1.Insert at front\n");
  printf("2.Insert at end\n");
  printf("3.Insert Before\n");
  printf("4.Insert After\n");
  printf("5.Delete TOP\n");
  printf("6.Delete END\n");
  printf("9.Display\n");

  while (1)
  {
    printf("Enter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
      insertFront();
      break;
    case 2:
      insertEnd();
      break;
    case 3:
      printf("Enter the element in which you want to insert before: ");
      scanf("%d", &n);
      insertBefore(n);
      break;
    case 4:
      printf("Enter the element in which you want to insert after: ");
      scanf("%d", &m);
      insertAfter(m);
      break;
    case 5:
      deleteTop();
      break;
    case 6:
      deleteEnd();
      break;
    case 9:
      display();
      break;
    default:
      printf("Invalid Input");
    }
  }
}