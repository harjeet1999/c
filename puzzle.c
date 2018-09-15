#include<stdio.h>
#include"dos.h"
getkey()
{
   union REGS i,o;
    while(!kbhit())
    i.h.ah=0;
    int86(22,&i,&o);
     return(o.h.ah);
}
 
