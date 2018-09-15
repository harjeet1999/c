#include<stdio.h>
#include<string.h>
int count(char *);
void main()
{ char *str[]={"we will teach you how to..",
                "move a mountain",
                "level a building",
                " Erase the past",
                 " make a million"};
   int i,a=0; 
   for(i=0;i<5;i++)
   a=a+count(str[i]);
    printf("\nno. of e is = %d",a);
    printf("\n");
  
}  int count(char *p)
 
     {  int j=0;
        while(*p!='\0')
     {    if(*p=='e' || *p=='E')
        { 
          j++;
          p++; 
          } else
          {  p++;
            }  }
     return j;
       }  
