#include<stdio.h>
struct student
  { int roll;
     char name[10];
    char dept;
    char course;
    int year;
 };
  void fname(struct student *);
  void main()
  {   int i;
      struct student s[5];
     for(i=0;i<5;i++)
     scanf("%s",s[i].name);
     for(i=0;i<5;i++)
     fname(&s[i].name);
     
} void fname(struct student *p)
  { 
     printf("%s",p->name);
   }
