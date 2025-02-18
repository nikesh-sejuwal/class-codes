#include <stdio.h>
#include <string.h>

char stack[30];
int top = -1;

int isempty()
{
  return top == -1;
}

int precedence(char c)
{
  switch (c)
  {
  case '^':
    return 3;
  case '*':
  case '/':
    return 2;
  case '+':
  case '-':
    return 1;
  default:
    return 0;
  }
}

int LR_associative(char c)
{
  return c != '^';
}

void push(char c)
{
  if (top == 29)
  {
    printf("\nStack is full ! ");
    return;
  }
  stack[++top] = c;
}

char pop()
{
  if (top == -1)
  {
    printf("\nStack is empty!");
    return '\0';
  }
  else
  {
    return stack[top--];
  }
}

char gettop()
{
  if (top == -1)
  {
    printf("Stack is empty");
    return '\0';
  }
  else
  {
    return stack[top];
  }
}

int isoperand(char exp)
{
  return (exp >= 'A' && exp <= 'Z') || (exp >= 'a' && exp <= 'z') || (exp >= '0' && exp <= '9');
}

int main()
{
  char infix[40], postfix[40], c;
  int i, j, len;
  printf("\nEnter an infix expression: ");
  gets(infix);
  len = strlen(infix);

  for (i = 0, j = 0; i < len; i++)
  {

    c = infix[i];

    if (c == '(')
    {
      push(c);
    }
    else if (c == ')')
    {
      while (gettop() != '(')
      {
        postfix[j++] = pop();
      }
      pop();
    }
    else if (isoperand(c))
    {
      postfix[j++] = c;
    }
    else
    {
      while (!isempty() && gettop() != '(' && precedence(c) <= precedence(gettop()))
      {
        postfix[j++] = pop();
      }
      push(c);
    }
  }

  while (!isempty())
  {
    postfix[j++] = pop();
  }

  postfix[j] = '\0';

  printf("\nPostfix: %s", postfix);
  return 0;
}
