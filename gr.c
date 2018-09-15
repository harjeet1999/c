#include<stdio.h>
int main()
{ int a[10],i,max;
 max=a[0];
   printf("enter number");
   for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
   for(i=1;i<=8;i++)
     
    if(max<a[i])
       max=a[i];
     printf("%d",max);
   return(0);
}
 
