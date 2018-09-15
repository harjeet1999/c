#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 void xleft(char *,char *,int);
 void main()
  { char a[]="do not love anyone";
    char b[7];
      int c;
     printf("enter number");
     scanf("%d",&c);
      xleft(a,b,c);
      printf("%s",b);
} void xleft(char *p,char *q,int a)
  {  
     int i;
    while(*p!=0)
   {   for(i=0;i<a;i++)
     {  *q=*p;
         p++;
          q++;
      }  break;
  }
}

