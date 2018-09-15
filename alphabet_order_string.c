#include<stdio.h>
#include<string.h>
void main()
{ char a[5][10]={"harjit","harkbmal","harkaran","yogesh","robin"};
   int i,l,j;
   char temp[5][10];
    for(i=0;i<5;i++)
    {  for(j=0;j<4;j++)
       { if(strcmp(a[i][0],a[j+1][0])>0)
          { strcpy(temp[j][0],a[i][0]);
            strcpy(a[i][0],a[j+1][0]);
             strcpy(a[j+1][0],temp[j][0]);
     }   
       } }   for(i=0;i<5;i++)
         printf("\n%s",a[i]);
   }
