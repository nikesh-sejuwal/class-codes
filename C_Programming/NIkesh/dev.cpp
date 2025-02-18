#include <stdio.h>
#include <conio.h>
int main()
{
	int a[5][5];
	int i,j,sum=0,prod=1;
	printf("Enter 5*5 matrix: ");
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
	
			scanf("%d",&a[i][j]);
		}
    }
 	for (i=0; i<5; i++)
 	{
 		for (j=0; j<5;j++)
 		{
 			if(i==j)
 			{
 			sum+=a[i][j];
 			}
 		    if(i+j==4)
 		    {
 		    	prod*=a[i][j];
			 }
 			
		 }
	 }
	 printf("The sum of the left diagonal is %d\n",sum);
	 printf("The product of the right diagonal is %d\n",prod);
}
