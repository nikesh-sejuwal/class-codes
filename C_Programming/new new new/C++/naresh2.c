int n;
printf("Enter any number: ");
scanf("%d", &n);
for (int i = 1; i <= n; i++)
  printf(" %d ", i *(i + 1) / 2);