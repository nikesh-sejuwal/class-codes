#include<stdio.h>
#include<conio.h>

int addition( int a, int b){
    return a + b;
}
int subtract (int a, int b){
    return a-b;
}
int mutiply ( int a, int b){
    return a*b;
}
float divide (float a, float b){
    return a/b;
}

void input() {
    int n1, n2;
    printf("Enter first number\n");
    scanf("%d",&n1);
    printf("Enter second number\n");
    scanf("%d",&n1,n2);      
}

void main(){
    int option;
    printf("ARITHMETIC OPERATIONS\n");
    printf("----------------------\n\n");
    printf("1.Addition\n");
    printf("2.Subract\n");
    printf("3.Mutiply\n");
    printf("4.divide\n");

    printf("Which operation?\n");  
    scanf("%d",&option);

    switch(option){
        case 1:
        // input();
        printf("The sum is %d", addition(2,3));
    }
}
