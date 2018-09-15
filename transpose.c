#include<stdio.h>
int main()
{ int a[4][4],i,j,temp;
   printf("enter the 4*4 matrix elements");
   for(i=0;i<4;i++)
     for(j=0;j<4;j++)
     scanf("%d",&a[i][j]);
    for(i=0;i<4;i++)
     for(j=0;j<4;j++)
      {   temp=a[i][j];
          a[i][j]=a[j][i];
          a[j][i]=temp;
        }
   printf("transpose elements are\n");
  for(i=0;i<4;i++)
    { for(j=0;j<4;j++)
   printf("\t%d",a[j][i]);
        printf("\n");
   }
}
