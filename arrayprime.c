#include<stdio.h>
int main()
{int a[100],i=0,j,t=0;
   printf("number 1 to 100");
    for(i=0;i<100;i++)
  {    a[i]=i+1;
    printf("\n%d",a[i]);
}
     for(i=2;i<=100;i++)
        for(j=1;j<=(100/i);j++)
          {  
             if(t=a[i]*j)
            {    printf("\n non prime numbers are%d",a[i]*j);
           } else
            { printf("prime numbers are%d",a[i]*j);
             }
     } 
     
               }
        
   
  
