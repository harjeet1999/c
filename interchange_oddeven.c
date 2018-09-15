#include<stdio.h>
void main()
{ 
  int a[5],i,temp;
   printf("enter the no. of elements in array");
   for(i=0;i<5;i++)
   scanf("%d",&a[i]);

   for(i=1;i<5;i=i+2)
  
      { temp=a[i]; 
        a[i]=a[i+1];
        a[i+1]=temp;
  }
                      
    for(i=0;i<5;i++)
   printf("\n%d",a[i]);
}

