#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *HEAD = NULL;
struct node *TAIL = NULL;

struct node *createnode()
{
  struct node *p = (struct node *)malloc(sizeof(struct node));
  printf("\nEnter data: ");
  scanf("%d", &p->data);
  p->next = NULL;
  return p;
}

void insertfront()
{
  struct node *p = createnode();
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

void insertend()
{
  struct node *p = createnode();
  if (HEAD == NULL)
  {
    HEAD = TAIL = p;
  }
  else
  {
    TAIL->next = p;
    TAIL = p;
  }
}

void insertbefore(int k)
{
  struct node *p, *tmp1, *tmp2;
  int flag = 0;
  if (HEAD == NULL)
  {
    printf("\nNothing in the list to insert before!!\n");
    return;
  }
  tmp1 = HEAD->next;
  tmp2 = HEAD;
  while (tmp1 != NULL)
  {
    if (tmp1->data == k)
    {
      flag = 1;
      break;
    }
    tmp2 = tmp1;
    tmp1 = tmp1->next;
  }
  if (flag == 0)
  {
    printf("\n%d doesn't exist in the list.\n", k);
    return;
  }
  p = createnode();
  p->next = tmp1;
  tmp2->next = p;
}

void insertafter(int a)
{
  int flag = 0;
  struct node *tmp1, *tmp2;
  if (HEAD == NULL)
  {
    printf("\nList is empty! Not possible.");
    return;
  }
  tmp1 = HEAD;
  while (tmp1 != NULL)
  {
    if (tmp1->data == a)
    {
      flag = 1;
      break;
    }
    tmp1 = tmp1->next;
  }
  if (flag == 0)
  {
    printf("%d is not found in the list.", a);
    return;
  }
  tmp2 = createnode();
  tmp2->next = tmp1->next;
  tmp1->next = tmp2;
}

void list()
{
  struct node *tmp = HEAD;
  while (tmp != NULL)
  {
    printf("%d -> ", tmp->data);
    tmp = tmp->next;
  }
  printf("NULL\n");
}

int main()
{
  int choice, k, a;
  system("cls");
  printf("\nEnter the number corresponding to what you want to do: ");
  printf("\n1. Insert data at front.\n2. Insert data at end.\n3. Insert data before.\n4. Insert data after.\n5. List all the items in the linked list.\n6. Quit\n");

  while (1)
  {
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
      insertfront();
      break;

    case 2:
      insertend();
      break;
    case 3:
      printf("\nEnter the number before which you want to insert data: ");
      scanf("%d", &k);
      insertbefore(k);
      break;
    case 4:
      printf("\nEnter the number after which you want to insert data: ");
      scanf("%d", &a);
      insertafter(a);
      break;
    case 5:
      list();
      break;
    case 6:
      exit(0); // Exit the program
      break;
    default:
      printf("\nInvalid choice. Try again.\n");
      break;
    }
  }

  return 0;
}
