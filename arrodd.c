#include<stdio.h>
int main()
{  int a[5],i;
   for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  for(i=0;i<5;i++)
      if(a[i]>0)
      {  a[i]%2==0?printf("\npositive even no.=%d",a[i]):printf("\npositive odd no=%d",a[i]);
     }  
      else
{
 a[i]%2==0?printf("\nnegative even no.=%d",a[i]):printf("\nnegative odd no.=%d",a[i]);
           }
  }
