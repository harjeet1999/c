#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int xstrrev(char *);
void main()
 { char *s[]={ "To err is human...",
             "But to really mess things up...",
             "One needs to know C!!" };
  
    xstrrev(*(s+1));
     xstrrev(*(s+2));
    printf("%s\n%s",*(s+1),*(s+2));
   
}  int xstrrev(char *p)
  {  int i=0,j=0;
     char t[100],q[100],*t1;
      t1=t;
     p=strlen(p)+p;
    while(*p!=0)     
   
    {  p--;
       *t1=*p;
        t1++;
     
      } 
         while(*t1!='\0')
      {   
          t[i]=*t1;
           t1++;
            i++;
    }  while(i>=0)
      {  q[j]=t[i];
          i--;
          j++;
     } q[j]=0;
}


