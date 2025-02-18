// #include <stdio.h>
// #include <string.h>

// int main()
// {
//   int i, j;
//   char name[20];
//   printf("Enter the name for prefix and suffix: ");
//   gets(name);
//   int len = strlen(name);
//   printf("PREFIX\n");
//   for (i = len; i >= 0; i--)
//   {
//     for (j = 0; j < i; j++)
//     {
//       printf("%c", name[j]);
//     }
//     printf("\n");
//   }
//   printf("SUFFIX\n");
//   for (i = 0; i < len; i++)
//   {
//     for (j = i; j < len; j++)
//     {
//       printf("%c", name[j]);
//     }
//     printf("\n");
//   }
// }
#include <stdio.h>
#include <string.h>
int current = 1;
void A(char c)
{
  if (c == '0')
  {
    current = 2;
  }
  else if (c == '1')
  {
    current = 3;
  }
  else
    current = -1;
}
void B(char c)
{
  if (c == '0')
  {
    current = 1;
  }
  else if (c == '1')
  {
    current = 4;
  }
  else
    current = -1;
}
void C(char c)
{
  if (c == '0')
  {
    current = 4;
  }
  else if (c == '1')
  {
    current = 1;
  }
  else
    current = -1;
}
void D(char c)
{
  if (c == '0')
  {
    current = 3;
  }
  else if (c == '1')
  {
    current = 2;
  }
  else
    current = -1;
}

int main()
{
  char name[20], c;
  int i = 0;
  printf("enter the name: ");
  gets(name);
  c = name[i];

  while (c != '\0')
  {
    switch (current)
    {
    case 1:
      A(c);
      break;
    case 2:
      B(c);
      break;
    case 3:
      C(c);
      break;
    case 4:
      D(c);
      break;
    default:
      break;
    }
    c = name[++i];
  }
  if (current == 1)
  {
    printf("Accepted %s", name);
  }
  else if (current == 2 || current == 3 || current == 4)
    printf("Rejected %s", name);
  return 0;
}