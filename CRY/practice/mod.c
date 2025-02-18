#include <stdio.h>
#include <conio.h>
#include <math.h>

void mod(int A)
{
  double res;
  for (int i = 0; i < 15; i++)
  {
    res = (int)pow(A, i) % 17;

    printf("The %d power %d mod 17 is:%.lf \n", A, i, res);
  }
}

int main()
{
  int num = 5;
  // printf("Enter the number to be selected: ");
  // scanf("%d", &num);
  printf("THE RESULT IS \n");
  mod(num);
  return 0;
}