#include<stdio.h>
#include<conio.h>
void main(){
    int n,sum=0,temp,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    
    temp=n;
    while(n!=0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum: %d",sum);
}