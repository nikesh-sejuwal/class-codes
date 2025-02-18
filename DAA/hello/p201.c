#include <stdio.h>

int max(int a, int b)
{
  return (a < b) ? b : a;
}

int knapsack(int wt[], int val[], int k, int N)
{
  int table[N + 1][k + 1];
  int i, j;
  for (i = 0; i <= N; i++)
  {
    for (j = 0; j <= k; j++)
    {
      if (i == 0 || j == 0)
      {
        table[i][j] = 0;
      }
      else
      {
        if (wt[i - 1] > j)
        {
          table[i][j] = table[i - 1][j];
        }
        else
        {
          table[i][j] = max(val[i - 1] + table[i - 1][j - wt[i - 1]], table[i - 1][j]);
        }
      }
    }
  }
  return table[N][k];
}

void main()
{
  int wt[] = {1, 2, 3}, vl[] = {10, 15, 40};
  int r = knapsack(wt, vl, 6, 3);
  printf("The max profit is: %d", r);
}