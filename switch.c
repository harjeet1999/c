#include<stdio.h>
void main()
 {   char ch;
       printf("enter any alphabets a,b,c");
       scanf("%c",&ch);
      switch(ch)
  {    case'a':
        break;
        case'A':
       printf("k");
       break;
       case'b':
       case'B':
      printf("n");
       break;
      case'c':
      case'C':
      printf("x");
      break;
      default:
       printf("r");
   }
      }
     
