#include<stdio.h>
#define UPLO(x) (x+32)
void main()
{ int ch;
   char y;
  printf("enter a capital alphabet");
   scanf("%d",&ch);
   y=UPLO(ch);
  printf("%c",y);
}
