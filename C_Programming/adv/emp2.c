#include <stdio.h>
#include <conio.h>

int main()
{
  FILE *file;
  char name[20]; int id; float salary;
  file = fopen("ap.txt","w");

  if(file==NULL)
  {
    printf("The file is not opened successfully.");
  }
  fscanf(file,"%s %d %f",name ,id, salary);
  fclose(file);
  return 0;
}