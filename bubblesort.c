#include<stdio.h>
void main()
{ int arr[5],i,j,temp;
   printf("enter the numbers for\nBUBBLE SORT");
   for(i=0;i<5;i++)
    scanf("%d",&arr[i]);
   for(j=0;j<4;j++)
  {  for(i=0;i<4;i++)
      {   if(arr[i]>arr[i+1])
           { temp=arr[i+1];
             arr[i+1]=arr[i];
             arr[i]=temp;
                      }
         else
         {  arr[i+1]=arr[i+1];
           }
             }     } printf("sorted elements are");
     for(i=0;i<5;i++)
     printf("\n%d",arr[i]);
   }
