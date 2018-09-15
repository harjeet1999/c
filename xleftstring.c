#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void xleft(char *,char *,int);
void xright(char *,char *,int);
void xsubstr(char *,char *,int ,int);
void main()
{ char a[]="do not cheat anyone!";
  char b[6];
   int c,z;
    printf("enter the number of character you extract");
    scanf("%d",&c);
    xleft(a,b,c);
     printf("new string is \n%s",b); 
     printf("\nenter no you want to enter");
     scanf("%d",&z);
     xright(a,b,z);
     printf("\n%s",b);
     xsubstr(a,b,c,z);
     printf("\n%s",b);
  
    
}  void xleft(char *p,char *q,int x)
  {    int i;
         
        for(i=0;i<x;i++)
        {   *q=*p;
           p++;
           q++;
}   *q='\0';
       }
 void xright(char *r,char *s,int y)
{  int i;
     r=r+strlen(r)-y;
     
    for(i=0;i<y;i++)
      { 
        *s=*r;
       r++;
      s++;
    }  
  
 } void xsubstr(char *m,char *n,int l,int j)

{  int i;
    m=m+(l-1);
   for(i=0;i<j;i++)
     { *n=*m;
        m++;
         n++;
    }
 }

