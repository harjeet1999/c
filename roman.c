#include<stdio.h>
int main()
{  int y,m,d,c,l,x,v,i;
   int a,b,e,f,g,h;
   printf("enter year");
    scanf("\n%d",&y);
    m=y/1000;
    a=y%1000;
    d=a/500;
    b=a%500;
    c=b/100;
    e=b%100;
    l=e/50;
    f=e%50;
    x=f/10;
    g=f%10;
    v=g/5;
    h=g%5;
    i=h/1;
    
    
   printf("m%dd%dc%dl%dx%dv%di%d",m,d,c,l,x,v,i);
  return 0;
}
