unt=o,n;
  printf("Enter the number to check whether prime or not: ");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
   if (n%i==0)
   {
     count++;
   }
  }

if (count==2)
{
  printf("It is a prime number.");
}
else
    printf("It is not prime number.");
    getch();
}