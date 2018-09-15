#include<stdio.h>
#include<string.h>
int main()
  {   char a[8];
       int i,n;
       printf("enter the value for n");
         scanf("%d",&n);
         printf("enter the string");
       gets(a);
       for(i=0;i<=n;i++)
     {  
         if(a[i]>=65&&a[i]<=90)
        {  a[i]=a[i]+32;
          
          
          }
         else
          a[i]=a[i]-32;

          
  }    printf("%s",a[i]); 
        return (0);
     }      

