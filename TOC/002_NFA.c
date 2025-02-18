/*
#include <stdio.h>
#include <conio.h>
#include <string.h>

int checker(char *check)
{
  int len = strlen(check);
  if (len < 2)
  {
    return 0;
  }
  if (check[(len - 2)] == '1')
  {
    return 1;
  }
  else
    return 0;
}

int main()
{
  char w[100];
  printf("Enter the string: ");
  scanf("%s", w);
  int res = checker(w);
  if (res)
  {
    printf("%s is accepted", w);
  }
  else
  {
    printf("%s is rejected", w);
  }
}

*/
#include <stdio.h>
#include <string.h>

int current = 0;

void A(char);
void B(char);
void C(char);
void D(char);

void A(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = -1; // Invalid transition
  }
  else
    current = 0;
}

void B(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = 2;
  }
  else
    current = 0;
}

void C(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = -1; // Invalid transition
  }
  else
    current = 0;
}

void D(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = -1; // Invalid transition
  }
  else
    current = 0;
}

int main()
{
  char w[50], c;
  int i = 0;
  printf("Enter the string: ");
  scanf("%s", w);
  c = w[i];
  while (c != '\0')
  {
    switch (current)
    {
    case 0:
      A(c);
      break;
    case 1:
      B(c);
      break;
    case 2:
      C(c);
      break;
    case -1:
      D(c);
      break;
    default:
      printf("Ok");
    }
    c = w[++i];
  }
  if (current == 2)
  {
    printf("%s Accepted", w);
  }
  else
  {
    printf("%s Rejected", w);
  }
}