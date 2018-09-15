#include<stdio.h>
void show(int (*p)[4],int,int);
/*void display(int (*p)[2],int,int);
void print(int p[][2],int,int);*/
void main()
{  int q[3][4]={ 1,2,3,4,
           5,6,7,8,
            9,0,1,54
};   show(&q,3,4);

  }   
   void show(int (*p)[4],int r,int c)

 {  int i,j; 
    int *z;
   
    
   for(i=0;i<r;i++)
       
    {   z=p+i;
        for(j=0;j<c;j++)
    {  printf("%d",*(z+j));
  printf("\n");
}  printf("\n");
  }
}
   
      
    
