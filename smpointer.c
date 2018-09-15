#include<stdio.h>
 void main()
{ int a[5],i,j,temp;
   int *p;
    p=a;
 for(i=0;i<5;i++)
 scanf("%d",&a[i]);
   for(i=0;i<4;i++)
    { for(j=0;j<5;j++)
  {  if(*(p+j)>*(p+j+1))
        temp=*(p+j+1);
        *(p+j+1)=*(p+j);
         *(p+j)=temp;
    }    
       }  for(i=0;i<5;i++)
          { printf("smallest element is%d",*(p+i));
                 
}
  } 
         
