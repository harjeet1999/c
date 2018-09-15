#include<stdio.h>
void main()
 { struct employee
    { int code;
      char name[12];
      int day;
      int month;
      int year;
    }e[5];
    int i;
    int d,m,y;
    printf("enter current date, month ,year\n");
    scanf("%d %d %d",&d,&m,&y);
   printf("\nenter 1. code 2.name 3.day 4.month 5.year\n");
   for(i=0;i<5;i++)
   { scanf("%d %s %d %d %d",&e[i].code,e[i].name,&e[i].day,&e[i].month,&e[i].year);
 }
     for(i=0;i<5;i++)
       if(e[i].year+3<y)
          { printf("\n%s",e[i].name);
          }
       else
         { if(e[i].year+3==y)
           { if(e[i].month<=m)
         { if(e[i].day<=d ||e[i].day>=d )
             printf("\n%s",e[i].name);
           } 
              }
                  }
    }

