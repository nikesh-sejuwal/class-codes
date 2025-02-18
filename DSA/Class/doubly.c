// Doubly.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next, *prev;
} node;
struct node *HEAD = NULL;
struct node *createnode()
{
  struct node *p = (struct node *)malloc(sizeof(node));
  printf("\nEnter data: ");
  scanf("%d", &p->data);
  p->prev = NULL;
  p->next = NULL;
  return p;
}
void insertfront()
{
  struct node *p = createnode();
  if (HEAD == NULL)
    HEAD = p;
  HEAD->prev = p;
  p->next = HEAD;
  HEAD = p;
}
void insertend()
{
  struct node *tmp;
  struct node *p = createnode();
  if (HEAD == NULL)
  {
    p->prev = NULL;
    HEAD = p;
  }
  else
  {
    tmp = HEAD;
    while (tmp->next != NULL)
      tmp = tmp->next;
    tmp->next = p;
    p->prev = tmp;
  }
}
void deleteEND()
{
  struct node *tmp;
  if (HEAD == NULL)
  {
    printf("List is empty. Cannot delete.\n");
    return;
  }
  if (HEAD->next == NULL)
  {
    free(HEAD);
    HEAD = NULL;
    return;
  }
  tmp = HEAD;
  while (tmp->next != NULL)
    tmp = tmp->next;
  if (tmp->prev != NULL)
  {
    tmp->prev->next = NULL;
  }
  free(tmp);
}
void list()
{
  struct node *current = HEAD;
  printf("The items in the linked list are:\n");
  while (current != NULL)
  {
    printf("%d ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}
int main()
{
  int choice;
  do
  {
    printf("\nEnter the number corresponding to what you want to do: ");
    printf("\n\
        2. Insert data at end.\n\
        6. Delete data at end.\n\
        9. List.\n\
        10. Exit. ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 2:
      insertend();
      break;
    case 6:
      deleteEND();
      break;
    case 9:
      list();
      break;
    case 10:
      getch();
      return 0;
    }
  } while (1);
  return 0;
}