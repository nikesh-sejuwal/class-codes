//Write a program in C that checks if a no. is prime or not.
//A no. is divisible by 1. & itself only.
#include<stdio.h>
#include<conio.h>
void main()
{
    int N, i, flag=1;
    printf("Enter a number: ");
    scanf("%d",&N);

    for (i=2; i<=N/2; i++)
    {
        if (N%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n%d is not prime",N);
    }
    else
    {
        printf("\n%d is prime",N);
    }
    getch();
}
