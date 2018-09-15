#include<stdio.h>
int main()
{ int a[5],i,min;
 min=a[0];
   printf("enter number");
   for(i=0;i<=4;i++)
    scanf("%d",&a[i]);
   for(i=1;i<=4;i++)
     
    if(min>a[i])
       min=a[i];
      
     printf("smallest no %d",min);
   return(0);
}
 
