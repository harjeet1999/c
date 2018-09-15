#include<stdio.h>
void modify(int *,int);
void main()
{ int a[10],i;
   for(i=0;i<10;i++)
   {scanf("%d",&a[i]);
     }
  modify(a,10);
  printf("new elementsare\n");
   for(i=0;i<10;i++)
    printf("\n%d",a[i]);
}
  void modify(int *p,int i)
{  int j;
   for(j=0;j<i;j++)
    *(p+j)=*(p+j)*3; 
 }
    
   
