#include <stdio.h>
#include <stdbool.h>

#define MAX_PROCESSES 10
#define MAX_RESOURCES 10

bool isSafeState(int available, int allocation[], int need[], int numProcesses)
{
  int work = available;
  for (int i = 0; i < numProcesses; i++)
  {
    if (need[i] <= work)
    {
      work += allocation[i];
    }
    else
      return false;
  }
  return true;
}

int main()
{
  int available, i;
  printf("Enter the available resources: ");
  scanf("%d", &available);

  int numprocesses;
  printf("Enter the number of processes: ");
  scanf("%d", &numprocesses);

  int allocation[MAX_PROCESSES];
  int need[MAX_RESOURCES];

  printf("Enter the allocation matrix: ");
  for (i = 0; i < numprocesses; i++)
  {
    printf("process %d ", i + 1);
    scanf("%d", &allocation[i]);
  }
  printf("Enter the need matrix: ");
  for (i = 0; i < numprocesses; i++)
  {
    printf("process %d ", i + 1);
    scanf("%d", &need[i]);
  }

  if (isSafeState(available, allocation, need, numprocesses))
  {
    printf("System is in safe state:");
  }
  else
    printf("System is in unsafe state: ");
  return 0;
}