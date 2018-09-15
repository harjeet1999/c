#include<stdio.h>
#include<string.h>
void main()
{  char a[]="working with strings is fun";
   int i,c;
   printf("no of character extracted");
   scanf("%d",&c);
   if(c==4)
 { for(i=0;i<c;i++)
  { printf("%c",a[i+3]);
      
  }
}   else if(c==0)
    printf("%s",a);
  }
