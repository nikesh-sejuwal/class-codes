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

// Function to insert a new node at the front
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

// Function to insert a new node at the end
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

// Function to insert a new node before a specified element
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

// Function to insert a new node after a specified element
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

// Function to delete the first node (top) of the linked list
void deleteTop()
{
  if (HEAD == NULL)
  {
    printf("\nList is empty. Nothing to delete.\n");
    return;
  }

  struct node *temp = HEAD;
  HEAD = HEAD->next;
  printf("Deleted %d which is in the top", temp->data);
  free(temp);
}

// Function to delete the last node (end) of the linked list
void deleteEnd()
{
  if (HEAD == NULL)
  {
    printf("\nList is empty. Nothing to delete.\n");
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
    // If there was only one node in the list
    HEAD = TAIL = NULL;
  }
  printf("Deleted %d which is in the last", current->data);
  free(current);
}

// Function to delete the node before a specified element
void deleteBefore(int k)
{
  if (HEAD == NULL || HEAD->next == NULL || HEAD->data == k)
  {
    printf("\nCannot delete before. List is empty or contains only one element or %d is the first element.\n", k);
    return;
  }

  struct node *current = HEAD;
  struct node *previous = NULL;

  while (current->next != NULL)
  {
    if (current->next->data == k)
    {
      if (previous != NULL)
      {
        previous->next = current->next;
      }
      else
      {
        HEAD = current->next;
      }

      free(current);
      return;
    }

    previous = current;
    current = current->next;
  }

  printf("\n%d not found in the list. Cannot delete before.\n", k);
}

// Function to delete the node after a specified element
void deleteAfter(int a)
{
  if (HEAD == NULL || HEAD->next == NULL)
  {
    printf("\nCannot delete after. List is empty or contains only one element.\n");
    return;
  }

  struct node *current = HEAD;

  while (current != NULL)
  {
    if (current->data == a && current->next != NULL)
    {
      struct node *temp = current->next;
      current->next = temp->next;
      free(temp);
      return;
    }

    current = current->next;
  }

  printf("\n%d not found in the list or it is the last element. Cannot delete after.\n", a);
}

// Function to display the linked list
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
  printf("\n1. Insert data at front.\n2. Insert data at end.\n3. Insert data before.\n4. Insert data after.\n5. Delete top.\n6. Delete end.\n7. Delete before.\n8. Delete after.\n9. List all the items in the linked list.\n10. Quit\n");

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
      deleteTop();
      break;

    case 6:
      deleteEnd();
      break;

    case 7:
      printf("\nEnter the number before which you want to delete data: ");
      scanf("%d", &k);
      deleteBefore(k);
      break;

    case 8:
      printf("\nEnter the number after which you want to delete data: ");
      scanf("%d", &a);
      deleteAfter(a);
      break;

    case 9:
      list();
      break;

    case 10:
      exit(0); // Exit the program
      break;

    default:
      printf("\nInvalid choice. Try again.\n");
      break;
    }
  }

  return 0;
}
