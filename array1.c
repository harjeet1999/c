#include<stdio.h>
void sum(int *);
void show(int **);
int main()
{ int num[40],i;
  for(i=0;i<40;i++)  
   num[i]=i;
 
  for(i=0;i<40;i++)  
 sum(&num[i]);
  
  return 0;
}  void sum(int *y)
  {  show(&y);
    
 
}  void show(int **z)
 {   printf("\n%d",**z);
}
