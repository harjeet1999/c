#include<stdio.h>
int i=35;
void fun1();
void fun2();
void main()
{  printf("%d",i);
   fun1();
 fun2();
} extern int i;
   void fun1()
{   
   i=i+5;
    
  printf("\n%d",i);
 } void fun2()
 {  i=i-2;
   printf("\n%d",i);
}
