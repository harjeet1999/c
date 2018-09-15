#include<stdio.h>
void fun(int *,int *);
void main()
{ int i=5,j=4;
   fun(&i,&j);
   printf("%d %d",i,j);
}
  
 void fun(int *i,int *j) 
{ *i=*i * *i;
   *j=*j * *j;
  }
