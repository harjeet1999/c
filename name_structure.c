#include<stdio.h>
struct student
 { int roll;  
  char name[10];
  char course[7];
  
 };
   struct year
  { int yr;
    struct student s[5];
  };
  
   void main()
  { struct year y[5];
     
    int i,n;
    for(i=0;i<5;i++)
    { scanf("%d %d %s %s",&y[i].yr,&y[i].s[i].roll,&y[i].s[i].name,&y[i].s[i].course);
     }

      printf("enter a year to find the name sof students\n");
      scanf("%d",&n);
     for(i=0;i<5;i++)
      if(y[i].yr==n)
   {    printf("\n%s",y[i].s[i].name);
      }

}
