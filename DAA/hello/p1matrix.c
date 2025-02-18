#include <stdio.h>
#include <limits.h>

int matrix(int N)
{
  int p[] = {3, 4, 5, 3, 5};
  int table[N + 1][N + 1];
  int i, j, L, minCost, k;
  for (i = 1; i <= N; i++)
  {
    table[i][i] = 0;
  }
  for (L = 2; L <= N; L++)
  {
    for (i = 1; i <= N - L + 1; i++)
    {
      j = i + L - 1;
      minCost = INT_MAX;
      for (k = i; k < j; k++)
      {
        int cost = table[i][k] + table[k + 1][j] + p[i - 1] * p[k] * p[j];
        if (cost < minCost)
        {
          minCost = cost;
        }
      }
      table[i][j] = minCost;
    }
  }
  return table[1][N];
}

void main()
{
  int N = 4;
  printf("The max cost is: %d", matrix(N));
}