#include <stdio.h>
#include <conio.h>

void test()
{
  int i,p[100];
  for (i=1; i<51; i++)
  {
    p[i]=(i)*2;
    printf("%d\n",p[i]);
  }
}


void  main()
{
  int a[50],i;
  for (i=1; i<=100; i++)
  {
    if (i%2==1)
    {
      a[i]=i;
     printf("%d\t",a[i]);
    }
  }
  //test();
}