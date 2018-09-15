#include<stdio.h>
#include<string.h>
int xstrcmp(char *,char *);
void main()
 {  char s[]={"harjit"};
    char a[]={"harmaran"};
      int i;
     i=strcmp(a,s);
      printf("difference is %d",i);
} int xstrcmp(char *p,char *q)
  { int f;
    while(*p!=0 && *q!=0)
     {  f=*p-*q;
          if(f==!0)
        {   break;
          }
        else
      { p++;
        q++; 
   }
     }
  return f;
}
   
