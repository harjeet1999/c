#include<stdio.h>
struct customers
 { int acc;
   char name[10];
   int bal;
  }c[5];
 void main()
 {  int i,n;
    int a,x;
    printf("enter 1. account number 2. customer name 3. balance");
    for(i=0;i<5;i++)  
    { scanf("%d %s %d",&c[i].acc,c[i].name,&c[i].bal);
       }
     for(i=0;i<5;i++)
        if(c[i].bal<100)
         { printf("\n acc no is =%d name =%s balance =%d",c[i].acc,      c[i].name,c[i].bal); 
           } printf("\nenter account no.");
             scanf("%d",&a);
             printf("\n enter amount");
             scanf("%d",&x);
   printf("\n enter code \n 1. for deposit \t0. for withdrawl");
   scanf("%d",&n);  
    switch(n)
   {   case 1:
      { for(i=0;i<5;i++)
            if(c[i].acc==a)
          {  c[i].bal=x+c[i].bal;
             printf("total balance is %d",c[i].bal);
            } } break;
        case 0:
        { for(i=0;i<5;i++)
           if(c[i].acc=a)
             { if(c[i].bal<x)
               { printf("the balance is insufficient for withdrawl");
                  } 
             } }break;
          default:
           break;
     }
  }






   

        
   
