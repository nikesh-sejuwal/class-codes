#include <stdio.h>
#include <conio.h>
#include <limits.h>

void wattsal(int A[][4], int N)
{
  for (int k = 1; k <= N; k++)
  {
    for (int i = 1; i <= N; i++)
    {
      for (int j = 1; j <= N; j++)
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
        printf("max\t");
      }
      else
      {
        printf("%d\t", A[i][j]);
      }
    }
    printf("\n");
  }
}

int main()
{
  int N = 3;
  int A[4][4] = {
      {0, 0, 0, 0},
      {0, 0, 4, 11},
      {0, 6, 0, 2},
      {0, 3, INT_MAX, 0},

  };
  wattsal(A, N);
  display(A, N);
  return 0;
}