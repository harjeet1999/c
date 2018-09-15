#include<stdio.h>
#include<stdlib.h>
void insert_node();
struct node create_node();
struct node
 { int data;
   struct node *next;
  }; struct node *start=NULL;
 void main()
 {   
        insert_node();
     }
    void insert_node()
  {  struct node *temp,*t;
     
        temp=create_node;
        printf("enter a data");
         scanf("%d",&temp->data);
          temp->next=NULL;
        if(start==NULL)
          { start=temp;
         
      }
        else
       {    t=start;
         while(t->next!=NULL)
      {       t=t->next;
             }
           t->next=temp;
        }
        
  
     struct node create_node()
{   struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
     
    
   }
    }

  
         
        
          
