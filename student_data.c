#include<string.h>
#include<stdio.h>
struct student
 { char name[10];
   char dpt[10];
   char course[7];
   int roll;
 }; void fdata(struct student *);
   void main()
  { struct student s[5];
    int i,j=1;
    for(i=0;i<5;i++)
   {   printf("%d",j); 
     printf("\nenter name of the students\n");
     scanf("%s",s[i].name);
     printf("\n enter department");
   scanf("%s",s[i].dpt);
    printf("\nenter course");
    scanf("%s",s[i].course);
    printf("\nenter roll no");
    scanf("%d",&s[i].roll);
     j++;
  }  for(i=0;i<5;i++)
     fdata(s);
  
}  void fdata(struct student *p)
  {   int r,i,z;
    
     printf("\nenter the no of  roll no is given");
      scanf("%d",&r);
      for(i=0;i<r;i++)
       { printf("\nenter roll no of student");
          scanf("%d",z);
         if(p->roll==z)
         { printf("\n%s \n%s \n%s ",p->name,p->dpt,p->course);
            }
    }  
 }
 
