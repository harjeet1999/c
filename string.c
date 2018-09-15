#include<stdio.h>
#include<string.h>
void xstrcpy(char *,const char *);
void main()
{ char a[]={"bamboozled"};
   char b[13];
   xstrcpy(b,a);
   printf("%s",b);
   
 }void xstrcpy(char *p,const char *q)
   {   while(*q!='\0')
        { *p=*q;
          p++;
          q++;
     }
      *p=0;
   
 
  
}
