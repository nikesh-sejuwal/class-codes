// // reverse of the number
// #include <stdio.h>
// #include <conio.h>
// void main()
// {
//   int a, rem = 0, sum = 0;
//   printf("Enter the number: ");
//   scanf("%d", &a);
//   while (a != 0)
//   {

//     rem = a % 10;
//     sum = sum * 10 + rem;
//     a = a / 10;
//   }
//   printf("The reverse of the number is %d", sum);
// }
// transpose matrix of 3 3 matrix i
#include <stdio.h>
#include <conio.h>
void main()
{
  int i, j;
  int f[3][3];
  printf("Enter 3*3 matrix: ");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
      scanf("%d", &f[i][j]);
  }
  printf("The tranverse matrix of the given numbers are: \n");
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d\t", f[j][i]);
    }
    printf("\n");
  }
}