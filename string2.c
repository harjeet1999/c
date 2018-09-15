#include<stdio.h>
#include<string.h>
#define NOTFOUND 0;
#define FOUND 1;
void main()
{  char s[6][10]=
                  {"simran"}, 
                  {"harkaran"},
                  {"harjit"},
                   {"yogesh"},
                   {"harkamal"},
                   {"loveleen"}
}; char a[10];
   int i,j;
   printf("enter your name");
   scanf("%s",a);
     for(j=0;j<6;j++)
    i=strcmp(a,&s[j][0])
    if(i==0

)
    {  printf("you fuddu enter");
        break; }
   else
{  printf("niklo fir"); 
  }
}



