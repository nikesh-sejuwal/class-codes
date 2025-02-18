#include <stdio.h>

int main(){
  FILE *nik;
  nik= fopen("b.txt","a");
   
  if (nik==NULL)
  {
    printf("File opening is unsuccessfull.\n");
    return 1;
  }
  printf("The file is successfully done.\n");
  fclose(nik);
}