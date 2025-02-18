#include<stdio.h>
#include<conio.h>

void input() {
    int n1;
    printf("-------------------------------------\n");
    printf("Check the number whether odd or even?\n");
    printf("--------------------------------------\n\n");
    printf("Enter the number: ");
    scanf("%d",&n1);
}

  void check() {
      int n1;
      if(n1%2==0)
        printf("It is even number.");
    else
    printf("It is odd number.");
  }
int main() {
    input();
    check();
    printf("\nOk byee.");
}