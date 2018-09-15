#include<stdio.h>
#include<math.h>
int abc(int,int,int,int,int,int);
/*int pab(int,int,int,int,int,int);
int pbc(int,int,int,int,int,int);
int pca(int,int,int,int,int,int);*/
int main()
{   int x,y,x1,y1,x2,x3,y2,y3;
     int a;
    a=abc(x1,y1,x2,y2,x3,y3);
   
}  int abc(int r,int s,int t,int u,int v,int w)
  {  int m,n,o,z;
     
      m=(sqt((r-t)*(r-t)+(s-u)*(s-u)));
      n=(sqt((t-v)(t-v)+(u-w)(u-w)));
      o=(sqt((v-r)(v-r)+(w-s)(w-s)));
       z=(m+n+o)/2;
   /*    s1=(m+n+o)%2;
   if(s1<2)
{   s1=s1*10;
    s2=s1/2;
    printf("s is equal to %d.%d",s,s2);
} else 
   printf("%d",s);*/
  z=(sqr(z(z-m)(z-n)(z-o)));
   printf("area is \n%d",z);
  return 0;
}





