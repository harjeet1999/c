#include<stdio.h>
#define qsort() {for(i=0;i<7;i++)
                 for(j=i;j>=0;j--)
               {  if(c[j].avg>c[j+1].avg)
                { temp=c[j];
                c[j]=c[j+1];
                 c[j+1]=temp;
                       }  };
struct record
 { char name[10];
   int age;
   int match;
   float avg;
   } c[7];
  void main()
  {   int i,j;
      struct record temp;
   printf("enter \n1.name 2. age 3. test matches played  4.average runs\n");
      for(i=0;i<7;i++)
     { scanf("%s %d %d %f",c[i].name,&c[i].age,&c[i].match,&c[i].avg);
        }
       for(i=0;i<7;i++)
    { printf("\n%s %d %d %f",c[i].name,c[i].age,c[i].match,c[i].avg);
        }
     qsort();
     printf("after sorted avg is");
      for(i=0;i<7;i++)
    { printf("\n %d\t%s\t%f",c[i].match,c[i].name,c[i].avg);
        }
}
      



