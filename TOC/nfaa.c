#include <stdio.h>
#include <string.h>

int current = 0;

void A(char);
void B(char);
void C(char);

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
  else
  {
    current = -1;
  }
}

void B(char c)
{
  if (c == '1')
  {
    current = 2;
  }
  else if (c == '0')
  {
    current = 1;
  }
  else
    current = -1;
}

void C(char c)
{
  // Function C is the accepting state
  if (c == '1')
  {
    current = 0; // Accepted state
  }
  else if (c == '0')
  {
    current = 1;
  }
  else
  {
    current = -1; // Reject
  }
}

int main()
{
  char w[50], c;
  int i = 0;
  printf("Enter the string: ");
  gets(w);

  // Check the size of the string

  c = w[i];
  while (c != '\0')
  {
    switch (current)
    {
    case 0:
      A(c);
      break;
    case 1:
      B(c); // Same as state 0 for string size 2
      break;
    case 2:
      C(c);
      break;
    default:
      printf("Rejected");
      return 0;
    }
    c = w[++i];
  }

  if (current == 2)
  {
    printf("%s Accepted\n", w);
  }
  else
  {
    printf("%s Rejected\n", w);
  }

  return 0;
}
