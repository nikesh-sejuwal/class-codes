#include <stdio.h>
#include <string.h>

int stack[50];
int current = 0;
int top = -1;

void push(char c)
{
  if (top == 19)
  {
    printf("Stack is full");
  }
  else
  {
    stack[++top] = c;
  }
}

void pop()
{
  if (top == -1)
  {
    printf("Stack is empty");
  }
  else
  {
    stack[top] = ' ';
    top--;
  }
}

char gettop()
{
  if (top == -1)
  {
    printf("Stack is empty");
    return 'e';
  }
  return stack[top];
}

void makeTransition(char c, char st, int state)
{
  switch (state)
  {
  case 0:
    if (c == 'e' && st == 'e')
    {
      push('Z');
      current = 1;
    }
    break;
  case 1:
    if (c == '0' && st == 'Z')
    {
      push('0');
      current = 1;
    }
    else if (c == '1' && st == 'Z')
    {
      push('1');
      current = 1;
    }
    else if (c == '1' && st == '1')
    {
      push('1');
      current = 1;
    }
    else if (c == '0' && st == '0')
    {
      push('0');
      current = 1;
    }
    else if (c == '0' && st == '1')
    {
      pop();
      current = 1;
    }
    else if (c == '1' && st == '0')
    {
      pop();
      current = 1;
    }

    else if (c == 'e' && st == 'Z')
    {
      push('Z');
      current = 2;
    }
    break;
  default:
    break;
  }
}

int main()
{
  char input[20], c;
  int i = 0;
  printf("Enter the input: ");
  gets(input);
  c = input[i];
  makeTransition('e', 'e', current);
  while (c != '\0')
  {
    makeTransition(c, gettop(), current);
    c = input[++i];
  }
  makeTransition('e', gettop(), current);
  if (current == 2)
  {
    printf("%s is accepted.", input);
  }
  else
  {
    printf("%s is rejected.", input);
  }
  return 0;
}