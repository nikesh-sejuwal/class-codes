#include <stdio.h>

int main()
{
  FILE *file;
  file =fopen("app.txt","w");
  
  if(file==NULL)
  {
    printf("The written is unsuccessful.\n");
  }
  fputs("Nikesh",file); 
  return 0;
}