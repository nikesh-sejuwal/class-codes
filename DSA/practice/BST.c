// while making a node we use similar template/concept just like doubly linked list but we use left pointer and right pointer
#include <stdio.h>
#include <stdlib.h>

struct node
{
  int val;
  struct node *left_child, *right_child;
};

struct node *create_node(int k)
{
  struct node *tmp = malloc(sizeof(struct node));
  tmp->val = k;
  tmp->left_child = NULL;
  tmp->right_child = NULL;
  return tmp;
}

struct node *insert(struct node *root, int k)
{
  struct node *tmp;
  if (root == NULL)
  {
    return create_node(k);
  }
  if (k <= root->val)
  {
    root->left_child = insert(root->left_child, k);
    // insert_left(k);
  }
  else if (k > root->val)
  {
    root->right_child = insert(root->right_child, k);
    // insert_right(k);
  }
  return root;
}

struct node *find_min(struct node *root)
{
  while (root->left_child != NULL)
  {
    root = root->left_child;
  }
  return root;
}

struct node *delete(struct node *root, int k)
{
  // struct node *tmp;
  if (root == NULL) // if there is nothing
  {
    printf("\nThere is nothing in the BST to delete\n");
    return 0; // where root is equal to 0
  }
  if (k < root->val) // no child case
  {
    root->left_child = delete (root->left_child, k);
  }
  else if (k > root->val) // only one child case
  {
    root->right_child = delete (root->right_child, k);
  }
  else
  {
    if (root->left_child == NULL)
    {
      struct node *tmp = root->right_child;
      free(root);
      return tmp;
    }
    else if (root->right_child == NULL)
    {
      struct node *temp = root->left_child;
      free(root);
      return temp;
    }
    struct node *temp = find_min(root->right_child);
    root->val = temp->val;
    root->right_child = delete (root->right_child, temp->val);
  }
  return root;
}
void pre_order_display(struct node *root) // pre-order traversal
{
  if (root != NULL)
  {
    printf("%d ->\t", root->val);
    pre_order_display(root->left_child);
    pre_order_display(root->right_child);
  }
}

int main()
{
  struct node *root = NULL;
  root = insert(root, 105);
  root = insert(root, 72);
  root = insert(root, 119);
  root = insert(root, 210);
  printf("BST before deletion:\n");
  pre_order_display(root);
  printf("\n");

  root = delete (root, 72);

  printf("\nBST after deletion:\n");
  pre_order_display(root);
  printf("\n");
  return 0;
}