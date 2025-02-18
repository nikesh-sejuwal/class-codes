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
  struct node *p = (struct node *)malloc(sizeof(struct node));
  p->key = item;
  p->left = p->right = NULL;
  return p;
}

// inorder traversal
void inorder(struct node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf("%d -> ", root->key);
    inorder(root->right);
  }
}

// insertion
struct node *insertNode(struct node *node, int key)
{
  if (node == NULL)
  {
    return createNode(key);
  }
  else if (key < node->key)
  {
    node->left = insertNode(node->left, key);
  }
  else
  {
    node->right = insertNode(node->right, key);
  }
  return node;
}

// MinvalueNode
struct node *minValueNode(struct node *node)
{
  struct node *current = node;
  while (current && current->left != NULL)
  {
    current = current->left;
  }
  return current;
}

// deletenode

struct node *deletenode(struct node *root, int key)
{
  if (root == NULL)
  {
    return root;
  }
  else if (key < root->key)
  {
    root->left = deletenode(root->left, key);
  }
  else if (key > root->key)
  {
    root->right = deletenode(root->right, key);
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
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deletenode(root->right, temp->key);
  }
  return root;
}

int main()
{
  struct node *root = NULL;
  root = insertNode(root, 10);
  root = insertNode(root, 12);
  root = insertNode(root, 11);
  root = insertNode(root, 14);
  root = insertNode(root, 13);
  root = insertNode(root, 15);
  root = insertNode(root, 16);
  root = insertNode(root, 123);
  root = insertNode(root, 102);
  root = insertNode(root, 1042);
  root = insertNode(root, 104);
  printf("\nInorder traversal\n");
  inorder(root);

  printf("After deleting 14");
  deletenode(root, 14);

  printf("\nInorder traversal\n");
  inorder(root);
}