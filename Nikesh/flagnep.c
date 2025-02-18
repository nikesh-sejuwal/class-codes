#include <stdio.h>
#include <conio.h>
  void inpt()
  {
    int i,j;
    for (i=0; i<=3; i++)
    {
      for (j=0; j<=i; j++)
      {
        printf("*");
      }
      printf("\n"); 
    }

  }
    void inpt2()
    {
      int a;
      for (a=0; a<=2; a++)
      {
        printf("*");
        printf("\n");
      }

    }

  void main()
  {
    inpt();
    inpt();
    inpt2();
  }