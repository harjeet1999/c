#include<stdio.h>
#include<string.h>
int rotation(char *);
void main()
 {  char a[]={"spaces"};
    int l,i;
    l=strlen(a);
  for(i=0;i<l;i++)
  { rotation(a);
     printf("\n%s",a);
   } 
} int rotation(char *p)
  { char b[6];
    char *t;
   int j;
     t=b;
    for(j=1;j<6;j++)
     { *t=*(p+j);
        t++;
    }  
   return *t; 
  }

