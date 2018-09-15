#include<stdio.h>
void main()
{ int a[3][3],i,j;
   int det=0;
   for(i=0;i<3;i++)
    for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);
   for(i=0;i<1;i++)
     for(j=0;j<3;j++)
     {  
          det=a[i][j]*(a[1][j+1]-a[2][1]*a[1][2]);
      }
   printf("\ndeterminant=%d",det);
}
