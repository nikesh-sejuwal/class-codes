#include <stdio.h>
void main(){
	int num1,num2;
	printf("Enter 2 numbers: ");
	scanf("%d %d",&num1, &num2);
	int res = num1%num2;
	printf( "The resut of %d mod  %d is: %d ", num1,num2, res);
		}