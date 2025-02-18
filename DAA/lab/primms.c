#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX
#include <limits.h>
#include <stdbool.h>

#define INF INT_MAX

void Prims(int G[6][6], int start)
{
  int parent[6];
  int key[6];
  bool mstSet[6];

  for (int i = 0; i < 6; i++)
    key[i] = INF, mstSet[i] = false;

  key[start] = 0;
  parent[start] = -1;

  for (int count = 0; count < 5; count++)
  {
    int min = INF, min_index;

    for (int v = 0; v < 6; v++)
      if (mstSet[v] == false && key[v] < min)
        min = key[v], min_index = v;

    int u = min_index;

    mstSet[u] = true;

    for (int v = 0; v < 6; v++)
      if (G[u][v] && mstSet[v] == false && G[u][v] < key[v])
        parent[v] = u, key[v] = G[u][v];
  }

  printf("Edge \tWeight\n");
  for (int i = 1; i < 6; i++)
    printf("%d - %d \t%d \n", parent[i], i, G[i][parent[i]]);
}
int main()
{
  int Vertices = 6;
  int Edges = 7;
  int start = 0;

  int graph[6][6] = {
      {0, 4, 0, 0, 8, 0},
      {4, 0, 8, 0, 11, 0},
      {0, 8, 0, 2, 0, 4},
      {0, 0, 2, 0, 7, 6},
      {8, 11, 0, 7, 0, 1},
      {0, 0, 4, 6, 1, 0}};

  Prims(graph, start);

  return 0;
}