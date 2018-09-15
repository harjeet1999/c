#include<stdio.h>
#include<math.h>
int main()
{  int a[5],i;
     float m=0;
     double x,s=0;
     
   for(i=0;i<5;i++)
    scanf("%d",&a[i]);
  for(i=0;i<5;i++)
   { m=m+a[i];
       } m=m/5;
   printf("\nnew mean is%f",m);
  for(i=0;i<5;i++)
 {   a[i]=((a[i]-m)*(a[i]-m));
}    for(i=0;i<5;i++)
     { s=s+a[i];
        } s=s/5;
    x=sqrt(s);
  printf("\nstandard deviation is%lf",x);
    return 1;
}
