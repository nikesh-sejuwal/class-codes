#include <stdio.h>
#include <limits.h>

void what(int A[][4], int N)
{
  int i, j, k;
  for (k = 1; k <= N; k++)
  {
    for (i = 1; i <= N; i++)
    {
      for (j = 1; j <= N; j++)
      {
        if (A[i][k] != INT_MAX && A[k][j] != INT_MAX && A[i][k] + A[k][j] < A[i][j])
        {
          A[i][j] = A[i][k] + A[k][j];
        }
      }
    }
  }
}

void display(int A[][4], int N)
{
  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= N; j++)
    {
      if (A[i][j] == INT_MAX)
      {
        printf("MAX\t");
      }
      else
      {
        printf("%d\t", A[i][j]);
      }
    }
    printf("\n");
  }
}

void main()
{
  int N = 3;
  int A[4][4] = {
      {0, 0, 0, 0},
      {0, 0, 4, 11},
      {0, 6, 0, 2},
      {0, 3, INT_MAX, 0},

  };
  what(A, N);
  display(A, N);
}