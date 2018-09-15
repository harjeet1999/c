#include<stdio.h>
#include<string.h>
void xstrlow(char *);
void xstrupp(char *);
void main()
{ char a[]="HARJIT SINGH";
    char b[]="manpreet singh";
  xstrlow(a);
   printf("%s",a);
   xstrupp(b);
   printf("%s",b);
}
  void xstrlow(char *p)
 { 
    while(*p!=0)
     *p=*p+32;
      p++; 
}
  void xstrupp(char *q)
  {  
    while(*q!=0)
      *q=*q-32;
       q++;
  }
     }
