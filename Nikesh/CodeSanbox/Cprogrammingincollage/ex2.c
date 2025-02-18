//Armstrong:A 3-digit number n consisting of digits xyz (i.e n(=)xyz) is armstrong, if sum of the cubes of digits is equal to n.      x^3+y^3+z^3=n.
#include<stdio.h>
#include<conio.h>
void main()
{
    int n, sum, r, m;
    sum=0;
    printf("Enter 3 digit number: ");
    scanf("%d",&n); m=n;
    while (n!=0)
    {
        r=n%10;
        sum= sum+(r*r*r);
        n=n/10;
        printf("%d  %d\n",n,sum);
    }
    if(sum==m)
    {
    printf("%d is armstrong",m);
}
else
{ printf("%d is not armstrong", m);}

}