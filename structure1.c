#include<stdio.h>
#include<string.h>

 
     struct emp
  { int num;
     char mess1[50];
     char mess2[50];

   }m1={2,"if you driven by success","make sure that it is a"};
void main()
   { struct emp m2,m3;
      m2=m1;
      m3=m2;
     
     
   printf("%d %s %s",m1.num,m2.mess1,m3.mess2);
 }
