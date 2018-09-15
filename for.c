#include<stdio.h>
void main()
  {  int i=1,j=1;
    for(;;){
    if(i>5)
     break;
   else
      j+=1;
     printf("\n%d",j);
     i=j++;
    }
 }  
