#include<stdio.h>
void prec(int);
int main()
{  int x;
   printf("enter a number");
   scanf("%d",&x);
  prec(x);

}
  void prec(int y)
{ int i=2;
   if(i<y)
  { if(y%i==0)
      {  printf("%d ",i); 
          y=y/2;}
        else
   i++;
 prec(y);
  } }
      
