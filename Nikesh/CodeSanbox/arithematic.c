#include <stdio.h>

#include <conio.h>

int
addition(int a, int b) {

  return a + b;

}

int
subtract(int a, int b) {

  if (a > b) {

    return a - b;

  }

  return b - a;

}

int
multiply(int a, int b) {

  return a * b;

}

float
divide(float a, float b) {

  if (a > b) {

    return a / b;

  }

  return b / a;

}

int
mod(int a, int b) {

  return (a % b);

}

int
main() {

  int option, n1, n2, res;

  printf("Arithmetic Operation\n");

  printf("---------------\n");

  printf("| 0.Exit      |\n");

  printf("| 1.Add       |\n");

  printf("| 2.Subtract  |\n");

  printf("| 3.Multiply  |\n");

  printf("| 4.Divide    |\n");

  printf("| 5.Mod       |\n");

  printf("---------------\n");

  printf("Which Operation\n");

  scanf("%d", & option);

  switch (option) {

  case 0:

    printf("Thank You!!!");
    exit(0);

    break;

  case 1:

    printf("Enter the first digit: ");

    scanf("%d", & n1);

    printf("Enter the second digit: ");

    scanf("%d", & n2);

    printf("The result is %d.", addition(n1, n2));

    break;

  case 2:

    printf("Enter the first digit: ");

    scanf("%d", & n1);

    printf("Enter the second digit: ");

    scanf("%d", & n2);

    printf("The result is %d.", subtract(n1, n2));

    break;

  case 3:

    printf("Enter the first digit: ");

    scanf("%d", & n1);

    printf("Enter the second digit: ");

    scanf("%d", & n2);

    printf("The result is  %d.", multiply(n1, n2));

    break;

  case 4:

    printf("Enter the first digit: ");

    scanf("%d", & n1);

    printf("Enter the second digit: ");

    scanf("%d", & n2);

    printf("The result is %2.2f.", divide(n1, n2));

    break;

  case 5:

    printf("Enter the first digit: ");

    scanf("%d", & n1);

    printf("Enter the second digit: ");

    scanf("%d", & n2);

    printf("The result is %d.", mod(n1, n2));

    break;

  default:

    printf("Select a operation.");

    break;

  }

}
