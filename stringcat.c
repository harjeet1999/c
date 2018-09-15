#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void xstrcat(char *,char *);
void main()
 { char a[6]="jass";
   char b[15]={"hello"};
   xstrcat(b,a);
  printf("%s",b);
} void xstrcat(char *p,char *q)
  {  
      p=p+strlen(p);
    while(*q!='\0')
     {  
       *p=*q;
       q++;
       p++; }
      
 }
