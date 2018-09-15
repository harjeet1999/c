#include <stdio.h>
#include <math.h>
int power(int a, int n);
int main()
{
   int a,n,result;
   printf("enter the values of a and n ");
   scanf("%d %d",&a,&n);
        result=power(a,n);
      printf("%d",result);

 } int power(int x,int y)
  {   int i;
    long z=1;
   for(i=1;i<=y;i++)
    {   z=x*z;
        
       } return z;  
  }






