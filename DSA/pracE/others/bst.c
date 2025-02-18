#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
  int key;
  struct node *left, *right;
};

struct node *createNode(int item)
{
  // int item;
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->key = item;
  p->left = p->right = NULL;
  return p;
};

void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

struct node *insertNode(struct node *node, int key)
{
  if (node == NULL)
  {
    return createNode(key);
  }
  if (key < node->key)
  {
    node->left = insertNode(node->left, key);
  }
  else
    node->right = insertNode(node->right, key);
  return node;
};

struct node *MinValue(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
  {
    current = current->left;
  }
  return current;
};

struct node *deleteNode(struct node *root, int key)
{
  if (root == NULL)
  {
    return root;
  }
  if (key < root->key)
  {
    root->left = deleteNode(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = deleteNode(root->right, key);
  }
  else
  {
    if (root->left == NULL)
    {
      struct node *temp = root->right;
      free(root);
      return temp;
    }
    else if (root->right == NULL)
    {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = MinValue(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
};

int main()
{
  struct node *root = NULL;
  root = insertNode(root, 16);
  root = insertNode(root, 7);
  root = insertNode(root, 8);
  root = insertNode(root, 89);
  root = insertNode(root, 810);
  root = insertNode(root, 1);

  printf("Inorder traversal");
  inorder(root);

  printf("After deleting node 10\n");
  root = deleteNode(root, 10);
  printf("Inorder traversal: ");
  inorder(root);
}