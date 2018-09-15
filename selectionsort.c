#include<stdio.h>
void main()
{  int arr[5],i,j,temp;
    printf("enter the number for arrange in increasing order"); 
   for(i=0;i<5;i++)
     scanf("%d",&arr[i]);
    for(i=0;i<4;i++)
    {   for(j=0;j<(5-i);j++)
         {   if(arr[i]>arr[i+j+1])
               {  temp=arr[i+j+1];
                  arr[i+j+1]=arr[i];
                 arr[i]=temp;
                  
                       }
            else
            {   arr[i+j+1]=arr[i+j+1];
                  }
       }  }
   printf("sorted elements are:\n");
    for(i=0;i<5;i++)
      printf("\n%d",arr[i]);
}
   
   
