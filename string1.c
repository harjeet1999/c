#include<stdio.h>
#include<string.h>
void xstrcat(char *,char *);
void main()
 {  char source[]={"hnji"};
    char target[20]={"mann"};
   strcat(target,source);
  printf("source=%s",source);
   printf("\ntarget=%s",target);
 } void xstrcat(char *p,char *q)
    {    while(*p='\0')
        {     p++;
             *p=*q;
              q++;
         }  p++;
   }
      
