#include <stdio.h>

void main()
{
  char CFG[20][20];

  printf("Enter the Production Rule \n");
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      printf("%d%d", i, j);

      scanf("%c", CFG[i][j]);
    }
  }
  printf("The rules are \n");
  for (int i = 0; i < 20; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      printf("%c", CFG[i][j]);
    }
  }
}