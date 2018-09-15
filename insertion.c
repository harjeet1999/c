#include<stdio.h>
int main()
{ int a[5],i,j,temp;
  printf("enter the 5 numbers");
  for(i=0;i<5;i++)
   scanf("%d",&a[i]);
    for(i=0;i<4;i++)
   
    {  for(j=i;j>=0;j--)
          if(a[j+1]<a[j])
           {  temp=a[j+1]; 
             a[j+1]=a[j];
             a[j]=temp;
              
                
                       } 
  }  printf("sorted elements are");
   for(i=0;i<5;i++)
     printf("\n%d",a[i]);
}
