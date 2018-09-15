#include<stdio.h>
void main()
{ 
   struct book
  { 
     char n[10];
     int p;
      int r;
     
   };
    struct author
     { char a;
       struct book b;
      };
      struct author a1;
       printf("enter author,book name,page,price");
      scanf("%c %s %d %d",&a1.a,&a1.b.n,&a1.b.p,&a1.b.r);
      printf("%c %s %d %d",a1.a,a1.b.n,a1.b.p,a1.b.r);
      }
     
