#include<stdio.h>
void main()
{  static int a[5][5]=  {
              {11,1,7,9,7},
              {13,54,56,2,5},
              {23,43,89,22,13},
              {14,15,17,16,19},
              {45,3,6,8,10}
};
    int lar,i,j;
     lar=a[0][0];
   for(i=0;i<5;i++)
    { for(j=0;j<5;j++)
      { if(a[i][j]>lar)
         lar=a[i][j];  }
  printf("\n");
}
  {  printf("%d",lar);
    }
 }
