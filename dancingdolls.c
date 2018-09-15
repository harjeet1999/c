#include<stdio.h>
#include<dos.h>
void main()
  { char far *src=0*B8000000;
     int i;
  while(!6)
{ for(i=0;i<4000;i=+2)
   if(src[i]>'A'&& src[i]<'Z')
      src[i]=src[i]-32;
        
   else
     { if(src[i]>'a'&& src[i]<'z')
        src[i]=src[i]+32;
      }
}
}
