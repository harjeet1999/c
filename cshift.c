#include<stdio.h>
void cshift(int,int,int);
int main()
{ int a,b,c;
  printf("enter value for a  b \n c");
   scanf("%d\n%d\n\n%d",&a,&b,&c);
   cshift(a,b,c);
 } void cshift(int r,int s,int t)
  {  int o;
     int x,y,z;
      x=r;
      y=s;
      z=t;
      o=x;
      x=z;
      z=y;
      y=o;
       printf("x=%d\nz=%d\ny=%d",x,z,y);
}
