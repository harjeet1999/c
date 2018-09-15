#include<stdio.h>
#include<string.h>
void vowels(char *);
void main()
{ char *a[]={"today is my friend birthday",
              "he give me very big party",
             };
     int i;
   for(i=0;i<2;i++)
  vowels(a[i]);
   for(i=0;i<2;i++)
    printf("\n%s",a[i]); 
 } void vowels(char *p)
  { 
     while(*p!='\0')
         if(*p=='a'|| *p=='e'||*p=='i'||*p=='o'||*p=='u')
          { *p=' ';
            p++;
         } else
           { p++;  }
   
   }
