#include <stdio.h>
#include <string.h>

int top = -1;
int stack[20];

void push(int k)
{
  if (top == 19)
  {
    printf("\nStack full!\n");
  }
  else
  {
    stack[++top] = k;
  }
}

int pop()
{
  if (top == -1)
  {
    printf("\nStack empty!\n");
    return -1;
  }
  return stack[top--];
}

int isoperand(char c)
{
  return (c >= '0' && c <= '9');
}

int perform_operation(int opd1, int opd2, char c)
{
  switch (c)
  {
  case '+':
    return opd1 + opd2;
    break;
  case '-':
    return opd1 - opd2;
    break;
  case '*':
    return opd1 * opd2;
    break;
  case '/':
    return opd1 / opd2;
    break;
  default:
    printf("Invalid operator\n");
    return 0;
  }
}

int main()
{
  char postfix[20];
  int len, op1, op2, result;
  printf("\nEnter a postfix expression to be evaluated:\n");
  gets(postfix);
  len = strlen(postfix);

  for (int i = 0; i < len; i++)
  {
    char c = postfix[i];
    if (isoperand(c))
    {
      push(c - '0');
    }
    else
    {
      op2 = pop();
      op1 = pop();
      result = perform_operation(op1, op2, c);
      push(result);
    }
  }

  result = pop();
  printf("\nResult: %d\n", result);

  return 0;
}
