#include<stdio.h>
#include<string.h>
void space(char *,char *);
void main()
 { char s[]={"hello  how    are  you"};
   char b[23];
     space(s,b);
     printf("\n%s",b);
} void space(char *q,char *p)
 {  
     while(*q!='\0')
       
      {   if(*q==' ')
            { if (*(q+1)!=' ')
               {  *p=*q;
                  p++;
                   
             } q++;
    }
        
           else
             { *p=*q;
                 q++;
                 p++;
  }
     }*p!=0;
 }
