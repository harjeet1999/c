#include<stdio.h>
#define pro(x) (x*x)
void main()
{  int i=3,j,k;
    j=pro(i++);
    k=pro(++i);
   printf("%d\n%d",j,k);
}

