#include<stdio.h>
int main()
{ int a[5]={15,30,28,19,61};
   int temp,temp2,i;
   temp=a[3];
   a[3]=a[0];
    a[0]=a[2];
  temp2=a[4];
   a[4]=a[1];
   a[2]=temp2;
  for(i=0;i<5;i++)
  printf("\t%d",a[i]);
  
 }
