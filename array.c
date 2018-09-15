#include<stdio.h>
int main()
{int a[10],i,sum=0,se=0;
   printf("enter values");
  for(i=0;i<=9;i++)
   scanf("%d",&a[i]);
   for(i=0;i<=9;i++)
    if(a[i]%2==0)
    
      sum=sum+a[i];
    
     else
     se=se+a[i];
 printf("sum odd%d",se);
printf("sum even%d",sum);
    

 return(0);
}


