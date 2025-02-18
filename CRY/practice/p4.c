// Caesar cipher
#include <stdio.h>
#include <strings.h>

void main()
{
  unsigned char message[100], ch;
  int i, key;
  printf("Enter the message you want to encrypt: ");
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
  printf("Decryption message is %s", message);

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
  printf("\nThe encrypted message is: %s", message);
}