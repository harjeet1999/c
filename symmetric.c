#include<stdio.h>
int main()
{ int a[3][3],i,j,b[3][3];
   printf("enter the 4*4 matrix elements");
   for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
   {  for(j=0;j<3;j++)
      {   b[i][j]=a[j][i];
        }
   }
     if(a[i][j]==b[i][j])
     {  printf("matrix is symmetric\n");
   printf("transpose elements are\n");
      for(i=0;i<3;i++)
       
    { for(j=0;j<3;j++)
     
   printf("\t%d",b[i][j]);
        printf("\n");}
    }
   else
  { printf("asymmertic matrix\n");
    printf("transpose elements are\n");
  for(i=0;i<3;i++)
     for(j=0;j<3;j++)
     printf("\t%d",b[i][j]);
        printf("\n");}
   
}
