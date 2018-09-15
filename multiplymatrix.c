#include<stdio.h>
int main()
{ int a[3][3],b[3][3],c[3][3],i,j;
     
   printf("enter the elements for a matrix");
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
   scanf("%d",&a[i][j]);
   printf("\n enter no. for b");
   
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
   scanf("%d",&b[i][j]);
    
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     {  c[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]+a[i][2]*b[2][j];
}  
   printf("new matrix is\n");
  for(i=0;i<3;i++)
  {   for(j=0;j<3;j++)
   printf("\t%d",c[i][j]);
        printf("\n");
   } printf("\n");
}
