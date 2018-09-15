#include<stdio.h>
 int *inc();
 
void main()
{   int *j;
     int *inc();
    j=inc();
     
    printf("%d",*j);
} int *inc()
   {   static int k=35;
       return(&k);
  
}
