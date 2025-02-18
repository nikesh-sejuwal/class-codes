#include <stdio.h>
#include <conio.h>

struct Job
{
  int id;
  int profit;
  int deadline;
};

void sortJobs(struct Job list[], int N)
{
  int i, j;
  struct Job tmp;
  for (i = 0; i < N - 1; i++)
  {
    for (j = 0; j < N - i - 1; j++)
    {
      if (list[j].profit < list[j + 1].profit)
      {
        tmp = list[j];
        list[j] = list[j + 1];
        list[j + 1] = tmp;
      }
    }
  }
}

void jobScheduling(struct Job list[], int N)
{
  sortJobs(list, N);
  int result[N], i, j, slot[N], count = 0, profit = 0;

  for (i = 0; i < N; i++)
  {
    slot[i] = 0;
  }

  for (i = 0; i < N; i++)
  {
    for (j = (list[i].deadline < N ? list[i].deadline : N) - 1; j >= 0; j--)
    {
      if (slot[j] == 0)
      {
        slot[j] = 1;
        result[j] = i;
        count++;
        break;
      }
    }
  }

  printf("Scheduled jobs: ");
  for (i = 0; i < N; i++)
  {
    if (slot[i])
    {
      profit += list[result[i]].profit;
      printf("%d ", list[result[i]].id);
    }
  }
  printf("\nTotal Profit: %d\n", profit);
}

int main()
{
  struct Job list[] = {
      {1, 100, 2},
      {2, 19, 1},
      {3, 27, 2},
      {4, 25, 1},
      {5, 15, 3}};

  int N = sizeof(list) / sizeof(list[0]);

  jobScheduling(list, N);
}
// Time Complexity O(N^2)
// Space Complexity O(N)