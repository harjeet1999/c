#include<stdio.h>
#include<stdlib.h>
void create();
void display();
struct node
 { int data;
   struct node *next;
  };struct node *start=NULL;
void main()
 { 
   create();
   create();
   display();
  }
    
    void create( ) 
     {    struct node *new,*ptr;
        new=(struct node *)malloc(sizeof(struct node *));
         if(new==NULL)
      {  printf("\ninsufficient space");
         }
      printf("\nenter the number\n");
      scanf("%d",&new->data);
        new->next=NULL;  
        if(start==NULL)
         { start=new;
           }
       else
        {  ptr=start;
          while(ptr->next!=NULL)
         { ptr=ptr->next;
            
      }  ptr->next=new;
  }
   }
        
 void display()

   {  struct node *ptr;
       if(start==NULL)
        { printf("list is empty");
          
         }
       else
        { ptr=start; 
      while(ptr->next!=NULL)
        { printf("\n%d",ptr->data);
           ptr=ptr->next;
     
   }  
      }
 }
    
