#include<stdio.h>
#include<string.h>
void fabbrev(char *);
void main()
 {  char a[5][10];
     int i;
      printf("enter the names");
       for(i=0;i<5;i++)
       scanf("%s",a[i]);
       for(i=0;i<5;i++)
       fabbrev(a[i]);
       printf("\n%s",a[i]);
} void fabbrev(char *p)
  {   while(*p!=0)
       {   *p=*p;
           p++;
          }
 }  
