//WAP in C  that finds roots of quadratic equation ax^2+bx+c=0
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   float a,b,c,D,x,y,j,k;
  printf("Enter the values of a,b,c: ");
  scanf("%f%f%f",&a,&b,&c);
  
  D=b*b-4*a*c;

  if(D>0)
  {
    printf("The roots are real.");
    x=(-b+sqrt(D))/(2*a);
    y=(-b-sqrt(D))/(2*a);
    printf("The two roots are %f\t%f",x,y);
  }
  else if(D==0)
  {
    printf("Two roots are equal.");
    x=(-b)/(2*a);
    printf("The roots are%f\t%f",x,x);
  }
  else if(D<0)
  {
    printf("The roots are imaginary.");
	  j=-b/2*a;
	  k=sqrt(-D)/2*a;
	  printf("x: %f + %fi\t",j,k);
	  printf("y: %f - %fi",j,k);
  }
}