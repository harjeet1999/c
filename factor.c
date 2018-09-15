#include<stdio.h>
int main()
{  int x,i;
   printf("enter a number");
   scanf("%d",&x);
   for(i=2;i<x;)
  {  int d;
      d=x/i;
      

 if(d%2==0 && d!=2)
  { printf("\nnon prime no%d",d);
      } 
    else
  {  printf("\nprime no %d",d);
    }
   i++;
   }
 return 0;
}
