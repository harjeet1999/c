#include<stdio.h>
 int main()
{  int i=1,n,product=1,p;
    
      
   
    switch (i)

 {   case 1:
        
       printf("enter any number");
        scanf("%d",&n);  
       while(n>0)
       {   p=product*n;
            printf("\n%d",p);
         n--;
     }
   
  {
      case 2:
          printf("enter a number");
          scanf("%d",&n);
       { if(n%2==0)
          printf("prime number");
           else
          printf("not a prime number");
             
         }
     }  
   
                
  {   default:
         printf("exit");
      break;
   }    return(0);  
   }   }














