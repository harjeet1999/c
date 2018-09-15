#include<stdio.h>
 int main()
 { float i,y,x;
    for(y=1;y<=6;y+=0.5)
    {  for(x=3.5;x<=9;x+=0.5)
        i=2+(y+0.5*x);
      printf("\n%f",i);
  }
     return(0);
  }
