#include<stdio.h>
#include<string.h>
void main()
 { char a[7][5]={"Mon","Tue","Wed","Thur","Fri","Sat","Sun"};
   int i,n,y;
   
   for(i=0;i<7;i++)
   {  printf("\t%s",a[i]);
     } printf("enter month");
       scanf("%d",&n);
    
        switch(n);
  
  {     case 1:
         printf("\n");
        for(i=1;i<=31;i++)
     
        if(i%7==1)
     {     printf("\n");
           printf("\t%d",i);
       
   }   else 
        { printf("\t%d",i);
          }
      case 2:
  
        printf("\n");
      if(y%4==0 && y%400==0 && y%100==0)
       for(i=0;i<=29;i++)
         { if(i%7==1)
           {     printf("\n");
           printf("\t%d",i);}
         else
         { printf("%d",i); }
       }  else
          for(i=0;i<=28;i++)
          if(i%7==1)
           {     printf("\n");
           printf("\t%d",i);}
         else
         { printf("%d",i); }
   }
 } 
   }
  


