#include <stdio.h>
#include <conio.h>
#include <string.h>

void makeTransition(char, char, int);
void push(char);
void pop();
char gettop();

int current = 0;
char stack[20];
int top = -1;

void push(char c)
{
  if (top == 19)
  {
    printf("stack full!");
    return;
  }
  stack[++top] = c;
}

void pop()
{
  if (top == -1)
  {
    printf("stack is empty");
    return;
  }
  stack[top] = ' ';
  top--;
}

char gettop()
{
  if (top == -1)
  {
    printf("\n stack is empty");
    getch();
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
    else if (c == '0' && st == '0')
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
    else if (c == '1' && st == '0')
    {
      pop();
      current = 1;
    }
    else if (c == '0' && st == '1')
    {
      pop();
      current = 1;
    }
    else if (c == 'e' && st == 'Z')
    {
      pop();
      current = 2;
    }
    break;
    // case 2:
    //   current = 2;
    //   break;1 
  }
}

int main()
{
  char inputstr[20], c;
  int i = 0;
  printf("Enter the input string: ");
  gets(inputstr);
  makeTransition('e', 'e', current);
  c = inputstr[i];
  while (c != '\0')
  {
    makeTransition(c, gettop(), current);
    c = inputstr[++i];
  }
  makeTransition('e', gettop(), current);
  if (current == 2)
  {
    printf("\n Accepted");
  }
  else
  {
    printf("\n Rejected");
  }
  return 0;
}