#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int inpt() {
  int code,choice;
    printf("Enter the code: ");
    scanf("%d",&code);

    switch(code)
    {
      case 1: printf("ON\n"); break;
      case 2: printf("OFF\n"); break;
      case 3: printf("START\n"); break;
      default: printf("FAIL\n"); break;
    }
  return 0;
}

int verf() {
  int a;
  printf("Do you want to run again?\n");
  printf("Enter 1 for YES and 2 for NO \n");
  scanf("%d", &a);
  if (a == 1) {
    inpt();
    verf();
  } else if (a == 2) {
    printf("BYE!!");
    exit(0);
  } else {
    printf("Try Again!!!");
    verf();
  }
  return 0;
}

void main() {
  inpt();
  verf();
}