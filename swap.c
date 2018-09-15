#include <stdio.h>
#include<math.h>
int main()
 {
   int  tmp,a,b;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   tmp=a;
   a=b;
   b=tmp;
   
  printf("\n after swapping \na=%d\nb=%d\n",a,b);
  return (0);
  } 
