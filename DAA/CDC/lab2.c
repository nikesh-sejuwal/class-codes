#include <stdio.h>
#include <conio.h>
int current = 0;

void A(char c);
void B(char c);
void C(char c);
void D(char c);
void E(char c);

void A(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = 0;
  }
}
void B(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else
  {
    current = 2;
  }
}
void C(char c)
{
  if (c == '0')
  {
    current = 3;
  }
  else
  {
    current = 0;
  }
}
void D(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else
  {
    current = 4;
  }
}
void E(char c)
{
  current = 4;
}

int main()
{
  char container[50], c;
  int i = 0;
  printf("Enter the strings: ");
  gets(container);
  c = container[i];

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
    case 3:
      D(c);
      break;
    case 4:
      E(c);
      break;

    default:
      break;
    }
    c = container[++i];
  }
  if (current == 4)
  {
    printf("Accepted");
  }
  else
  {
    printf("Rejected");
  }
  return 0;
}