//Write a program in C that finds the smallest among 3 numners.
#include<stdio.h>
#include<conio.h>
void main(){
    int n1,n2,n3;
    printf("Enter the first no.");
    scanf("%d",&n1);

    printf("\nEnter the second no.");
    scanf("%d",&n2);

    printf("\nEnter the third no.");
    scanf("%d",&n3);

    if (n1<n2&&n1<n3)
    {
        printf("The smallest no is %d",n1);
    }
    else if (n2<n1&&n2<n3)
    {
        printf("The smallest no is %d",n2);
    }
    else
         printf("The smallest no. is %d",n3);
}