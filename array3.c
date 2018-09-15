#include<stdio.h>
void change(int,int*);
void main()
{   int b[5],i,a=16;
  
    for(i=0;i<=4;i++)
 {     b[i]=2*i;
}
   change(a,b);
 for(i=0;i<=4;i++)
  printf("\n%d",b[i]);
   printf("\na=%d",a);
} void change(int n,int *x)
{ int i;
   for(i=0;i<=4;i++)
     *(x+i)+=2;
     n+=2;
}
   
  
