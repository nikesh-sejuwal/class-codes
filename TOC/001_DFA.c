#include <stdio.h>
#include <conio.h>
#include <string.h>
int current = 0;
void A(char);
void B(char);
void C(char);

void A(char c)
{
  if (c == '0')
  {
    current = 0;
  }
  else if (c == '1')
  {
    current = 1;
  }
  else
    current = -1;
}
void B(char c)
{
  if (c == '0')
  {
    current = 0;
  }
  else if (c == '1')
  {
    current = 2;
  }
  else
    current = -1;
}
void C(char c)
{
  if (c == '0' || c == '1')
  {
    current = 2;
  }
  else
    current = -1;
}

int main()
{
  char w[50], c;
  int i = 0;
  printf("enter the string: ");
  gets(w);
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
    default:
      printf("Ok");
    }
    c = w[++i];
  }
  if (current == 2)
  {
    printf("%s Accepted ", w);
  }
  else
  {
    printf("%s Rejected", w);
  }
}