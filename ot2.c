#include<stdio.h>
int avg(int,int,int);
int per(int,int,int);

 int main()
{ int m,s,p;
  float a,b;
   printf("enter values");
   scanf("%d%d%d",&m,&s,&p);
   a=avg(m,s,p);
    b=per(m,s,p);
 printf("%f avereage is\n %fpercentage is",a,b);
} int avg(int x,int y,int z)
  {   float c;
     c=(x+y+z)/3;
   return c;
}   int per(int r,int s,int t)
   {  float d;
     d=((r+s+t)/300)*100;

     return d;
}
   
