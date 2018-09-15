#include<stdio.h>
int main()
{ int a[3][3],b[3][3],i,j;
     
   printf("enter the elements for a and b matrix");
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
   printf("\n enter for b");
   
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
   scanf("%d",&b[i][j]);
    
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {  a[i][j]=a[i][j]+b[i][j];
}  
   printf("new matrix is\n");
  for(i=0;i<3;i++)
  {   for(j=0;j<3;j++)
   printf("\t%d",a[i][j]);
        printf("\n");
   } printf("\n");
}
