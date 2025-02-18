#include <stdio.h>

struct Vertex
{
  int vertex;
  int key;
};

void swap(struct Vertex *a, struct Vertex *b)
{
  struct Vertex t = *a;
  *a = *b;
  *b = t;
}

void minHeapify(struct Vertex minHeap[], int idx, int heapSize)
{
  int smallest = idx;
  int left = 2 * idx + 1;
  int right = 2 * idx + 2;

  if (left < heapSize && minHeap[left].key < minHeap[smallest].key)
    smallest = left;

  if (right < heapSize && minHeap[right].key < minHeap[smallest].key)
    smallest = right;

  if (smallest != idx)
  {
    struct Vertex temp = minHeap[idx];
    minHeap[idx] = minHeap[smallest];
    minHeap[smallest] = temp;
    minHeapify(minHeap, smallest, heapSize);
  }
}

void buildMinHeap(struct Vertex minHeap[], int heapSize)
{
  for (int i = (heapSize - 2) / 2; i >= 0; --i)
    minHeapify(minHeap, i, heapSize);
}

void decreaseKey(struct Vertex minHeap[], int i, int key)
{
  minHeap[i].key = key;
  while (i && minHeap[i].key < minHeap[(i - 1) / 2].key)
  {
    swap(&minHeap[i], &minHeap[(i - 1) / 2]);
    i = (i - 1) / 2;
  }
}

struct Vertex extractMin(struct Vertex minHeap[], int *heapSize)
{
  struct Vertex min = minHeap[0];
  minHeap[0] = minHeap[--*heapSize];
  minHeapify(minHeap, 0, *heapSize);
  return min;
}

void prims(int graph[6][6], int V)
{
  struct Vertex minHeap[V];
  int heapSize = V;
  int parent[V];
  int inHeap[V];

  for (int v = 0; v < V; ++v)
  {
    parent[v] = -1;
    minHeap[v].vertex = v;
    minHeap[v].key = 9999;
    inHeap[v] = 1;
  }

  minHeap[0].key = 0;

  buildMinHeap(minHeap, V);

  while (heapSize)
  {
    struct Vertex minVertex = extractMin(minHeap, &heapSize);
    int u = minVertex.vertex;
    inHeap[u] = 0;

    for (int v = 0; v < V; ++v)
    {
      if (graph[u][v] && inHeap[v])
      {

        int vIndexInHeap = -1;
        for (int i = 0; i < heapSize; i++)
        {
          if (minHeap[i].vertex == v)
          {
            vIndexInHeap = i;
            break;
          }
        }

        if (vIndexInHeap != -1 && graph[u][v] < minHeap[vIndexInHeap].key)
        {
          decreaseKey(minHeap, vIndexInHeap, graph[u][v]);
          parent[v] = u;
        }
      }
    }
  }

  for (int i = 1; i < V; ++i)
    printf("Edge: %d - %d \tWeight: %d \n", parent[i], i, graph[i][parent[i]]);
}

int main()
{
  int graph[6][6] = {
      // A, B, C, D,  E, F
      {0, 4, 0, 0, 8, 0},
      {4, 0, 8, 0, 11, 0},
      {0, 8, 0, 2, 0, 4},
      {0, 0, 2, 0, 7, 6},
      {8, 11, 0, 7, 0, 1},
      {0, 0, 4, 6, 1, 0},
  };

  prims(graph, 6);
}