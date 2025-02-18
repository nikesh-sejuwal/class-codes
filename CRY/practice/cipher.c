#include <stdio.h>
#include <conio.h>
#include <strings.h>

void main()
{
  char message[100], ch;
  int key, i;
  printf("Enter the message to encrypt: ");
  gets(message);
  printf("Enter the key: ");
  scanf("%d", &key);
  for (i = 0; message[i] != '\0'; i++)
  {
    ch = message[i];
    if (ch >= 'a' && ch <= 'z')
    {
      ch = ch + key;
      if (ch > 'z')
      {
        ch = ch - 'z' + 'a' - 1;
      }
      message[i] = ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      ch = ch + key;
      if (ch > 'Z')
      {
        ch = ch - 'Z' + 'A' - 1;
      }
      message[i] = ch;
    }
  }
  printf("The encypted message is: %s", message);
  fflush(stdin);
  printf("\n-----------------------------\n");

  printf("Enter the message to decypt: ");
  gets(message);
  printf("Enter the key: ");
  scanf("%d", &key);
  for (i = 0; message[i] != '\0'; i++)
  {
    ch = message[i];
    if (ch >= 'a' && ch <= 'z')
    {
      ch = ch - key;
      if (ch < 'a')
      {
        ch = ch + 'z' - 'a' + 1;
      }
      message[i] = ch;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      ch = ch - key;
      if (ch < 'A')
      {
        ch = ch + 'Z' - 'A' + 1;
      }
      message[i] = ch;
    }
  }
  printf("The decrypted message is: %s", message);
}