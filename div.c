#include<stdio.h>
int main()
{  int a,b,c,z,x;
 printf("enter a number a and b");
 scanf("%d %d",&a,&b);
 c=a/b;
 z=a%b;
 if(z<b)
{ z=z*10;
   x=z/b;
   printf("%d.%d",c,x);
  
} else
   printf("result is%d",c);
  return 0;
}


