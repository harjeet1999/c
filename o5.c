#include<stdio.h>
void main()
{ 
   int a[5]={0,4,3,1,2};
    int *i[]={a,a+1,a+2,a+3,a+4 };
  
 
    printf("\n%u\t%u\t %d",i,*i,*(*i));
}
