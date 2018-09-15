#include<stdio.h>
#include<string.h>
int div1(int);
void main()
 { char a[4][8]={"soap","shampoo","facewash","colgate"};
    int n,t;
    printf("enter no of transaction");
    scanf("%d",&t);
    printf("to check the quantities left \n enter \n1. for saop \n 2. for shampoo \n 3. for facewash \n 4.for colgate \n 5. enter any no for exit");
     scanf("%d",&n);
    switch(n)
  {   case 1:
       { int s,sum;
         printf("\n\nno of soap left");
         scanf("%d",&s);
         sum=s+div1(t);
         printf("\n\ninventory table updated \n soap = %d",sum);
         
        break;
        }
      case 2:
      { div1(t); 
         break; }
       case 3:
       {  div1(t);
          break;
        }
      case 4:
       { div1(t);
          break;
         }
     default:
        { break;}
  }
    }
 
    int div1(int a)
  {   printf("\n\nupdate inventory table");
      return a;
    }
      
      
      

