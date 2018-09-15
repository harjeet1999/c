#include<stdio.h>
#include<math.h>
int main ()
{   int a,i,result=0,n;
   printf("enter any number for n");  
  scanf("%d",&n);
     i=n;
    while(i!=0)
         
     {  a=i%10;
          result+=a*a*a;
          i/=10;
     }
      if(n==result)
            
     printf("armstrong number%d",n);
    else
        printf("not an armstrong number %d",n);

    
         return (0);
        }
