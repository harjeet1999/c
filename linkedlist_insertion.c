#include<stdio.h>
#include<stdlib.h>
void insert(struct node *,int);
 struct node
  {  int data;
      struct node *next;
    }; 
 void main()
 {  struct node *start=NULL;
     int num;
      printf("enter a number to insert at end\n\n");
     scanf("%d",&num);
     insert(struct node *start,int num);

 }
  void insert(struct node* head,int d)
 { 
     if(head==NULL)
       { printf("insufficient nodes\n\n");
         }
     else
      { struct node *new_node;
        new_node=(struct node *)malloc(sizeof(struct node));
         new_node->data=d;
          new->next=NULL; 
       }
     while(head!=NULL)
     {  head=head->next;
        
       }
         head->next=new_node;
}
     
              

 
       
