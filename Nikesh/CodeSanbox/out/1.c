#include <stdio.h>
#include <conio.h>
void main ()
{
    int i, n, sum=0,r;
    for (i=0;i<=10000; i++)
    {
        n=i; sum=0;
        while(n!=0)
        {
            r=n%10;
            if(i<10){sum=sum+r;}
            else if (i<100) {sum=sum+(r*r);}
            else if (i<1000) {sum=sum+(r*r*r);}
            else {sum=sum+(r*r*r*r);}\
            n=n/10;
        }
        if(sum==i) {printf("\n%d",i);}
    }
getch();
}