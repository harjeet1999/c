#include<stdio.h>
#include<string.h>
void main()
 { char **p,*q;
   char a[10];
   printf("enter any month");
   scanf("%s",a);
   q=a;
   p=&q;
   printf("%s",*(*p));
   }
