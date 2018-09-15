#include<stdio.h>
void main()
{  
     struct dates
     { int date;
       int month;
        int year;
      };
  struct dates d[5];
    int i,j;
     for(i=0;i<5;i++)
    {  printf("\nenter date\n");
      scanf("%d",&d[i].date);
      printf("\nenter month\n");
      scanf("%d",&d[i].month);  
      printf("\nenter year\n");
      scanf("%d",&d[i].year);
      }
   printf("compare two dates");
   for(i=0;i<4;i++)
    for(j=i;j<4;j++)
     if(d[i].date==d[j+1].date) 
      { printf("\ndate is equal\n");
         printf("\n%d = %d",d[i].date,d[j+1].date);
         }
      else
       { printf("\nUNEQUAL DATE\n");
          }
 }


      
