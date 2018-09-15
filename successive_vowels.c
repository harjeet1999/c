#include<stdio.h>
#include<string.h>
void count(char *);
void main()
  {  char a[]={"please read this application and give me gratuity"};
      count(a);
   }
  void count(char *p)
 {  
    while(*p!=0)
      {  
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')
       { 
   if(*(p+1)=='a'||*(p+1)=='e'||*(p+1)=='i'||*(p+1)=='o'||*(p+1)=='u') 
               printf("%c %c",*p,*(p+1));
                p++;
           
      } }
p++;
     
}
