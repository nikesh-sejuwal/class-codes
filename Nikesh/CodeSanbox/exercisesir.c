#include<stdio.h>
#include<conio.h>
void main()
{int a,b,c,small;
printf("Enter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a<b&&a<c)small=a;
else if (b<a&&b<c)small=b;
else small=c;
printf("\n%d is smallest",small);
getch();
}