//WAP in C that displays all armstrong numbers below 10000
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a=0,b,k,sum=0,temp,count =0;
  while(a!=10000)
  {
    k = a;
    while(k!=0){
      k = k/10;
      count+=1;
    }
    if (a==1){
      printf("Armstrong %d\n",a);
    }
    if (count !=2 && count != 1){
      temp = a;
      while(temp!=0){
        b = temp%10;
        sum=sum+pow(b,count);
        temp=temp/10;
        printf("sum %d count %d b %dpowered  dajndj %d  \n",sum,count,temp,b);
        
      }
      if (a==sum){
        printf("Armstrong %d\n",a); 
        sum=0;
      }
      else{
        printf("Not  a armstrong %d , sum = %d\n",a,sum);
        sum=0;
        count=0;
      }
      
      

    }
    if(a==153){
      //printf("Not  a armstrong %d , sum = %d\n",a,sum);
      break;
    }
    count=0;
    a+=1;
  }
}