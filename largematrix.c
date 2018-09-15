#include<stdio.h>
int main()
{ int a[5][5]={ 4,8,6,1,2,
                45,25,32,21,54,
                78,57,52,53,69,
                47,42,40,90,91,
                25,36,59,0,10
      };  int i,j,temp;
    
   for(i=0;i<5;i++)
       for(j=0;j<5;j++)
    { if(a[i][j]< a[i][j+1])
      temp=a[i][j+1];
      a[i][j+1]=a[i][j];
      a[i][j]=temp;  }
 
      printf("no are\n");
     for(i=0;i<25;i++)
     printf("\n%d",*(p+i));
}
             
          
