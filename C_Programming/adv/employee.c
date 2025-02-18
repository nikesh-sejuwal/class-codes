#include <stdio.h>
#include <conio.h>
int main(){
  FILE *file;
  char name[20]; int ID; float salary;
  file = fopen("ap.txt","w");
  if(file== NULL)
  {
    printf("The file was not written successflly.");
  }
  printf("Enter the employee name\n");
  scanf("%s",&name); fflush(stdin);
  
  printf("Enter the employee ID\n");
  scanf("%d",&ID); fflush(stdin);
  

  printf("Enter the employee salary\n");
  scanf("%f",&salary); fflush(stdin);
  
  fprintf(file, "%s %d %f",name, ID, salary);

  fclose(file);

  return 0;

}