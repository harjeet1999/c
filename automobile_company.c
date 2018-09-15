#include<stdio.h>
void main()
 { struct engine
    { char parts[4];
       int year;
       char matr[10];
       int qty;
   }p[6];
   int i,j=0;
   
   printf("enter \n1. parts\t 2. year \t3.material \t4.quantity ");
   for(i=0;i<6;i++)
   { scanf("%s %d %s %d",p[i].parts,&p[i].year,p[i].matr,&p[i].qty);
       }
   
     for(i=0;i<6;i++)
     if(p[i].parts=="BB1"||p[i].parts=="CC2"||p[i].parts=="DD3")
       { printf("%d\t",j);
         printf("\n %s  %d  %s  %d",p[i].parts,p[i].year,p[i].matr,p[i].qty);
           j++;
          }
}
