#include<stdio.h>
int nsum(int);
 int main()
{ int a,s;
   printf("enter a value for a ");
   scanf("%d",&a);
  s=nsum(a);
 printf("%d sum of natural number is",s);
} int nsum(int x)
 { 
   if(x<25)
  {   x=x+nsum(x+1);
      
  } 
    return x;
;
}
