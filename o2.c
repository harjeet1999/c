#include<stdio.h>
int f(int);
 int g(int);
void main()
{ int x,y,s=2;
   s*=3;
   y=f(s);
   x=g(s);
 printf("\n%d\n%d\n%d",s,y,x);
}  int t=8;
    int f(int a)
{    
    a+=-5;
     t-=4;
    return(a+t);
}  int g(int a)
{    a=1;
     t+=a;
     return(a+t);
} 
