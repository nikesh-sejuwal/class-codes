#include<stdio.h>
#include<conio.h>
void main(){
    int line =0,star=0;
    while (line>6)
    {
        star=0;
        while (star<line+10){
            printf("*"); star++;
        }
        printf("\n"), line++;
    }
}