#include<stdio.h>
void main()
 {  struct library
     { int acc;
       char title[10];
       char atname[10];
       int price;
       char flag[10];
     };
       struct library l[5],a;
       int i,n,temp,j;
   printf("enter 1.acc no. 2.title  3.atname  4.price  5.flag ");
     for(i=0;i<5;i++)
     { scanf("\n%d %s %s %d %s",&l[i].acc,l[i].title,l[i].atname,&l[i].price,l[i].flag); }
    { x:
    printf("\nenter \n1 add book info\n2 dispaly book info\n3 list books of an author\n 4 list the title of specified book\n 5 books are inthe accession no order\n6 exit\n"); 
 scanf("%d",&n); }
   switch(n)
    { case 1:
       {  
         scanf("\n%d %s%s%d%s",&a.acc,a.title,a.atname,&a.price,a.flag);
       printf("\n%d %s%s%d%s",a.acc,a.title,a.atname,a.price,a.flag);
        } goto x;
       case 2:
     {  
        printf("\n%d %s%s%d%s",a.acc,a.title,a.atname,a.price,a.flag);
        } goto x;
        case 3:
           for(i=0;i<5;i++)
     { printf("\n%d %s %s %d %s",l[i].acc,l[i].title,l[i].atname,l[i].price,l[i].flag); 
        } goto x;
          case 4:
          for(i=0;i<5;i++)
     { printf("\n %s ",l[i].title); 
        } goto x;
      case 5:
        
      for(i=0;i<4;i++)
      { for(j=i+1;j>0;j--)
       if(l[i].acc>l[j].acc)
        { temp=l[i].acc;
          l[i].acc=l[j].acc;
          l[j].acc=temp;
         } }goto x;
        default:
           break;
       }
 }

         
        
       
     

       
         
