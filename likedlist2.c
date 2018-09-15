#include<stdio.h>
#include<stdlib.h>
struct node* create();
void insert(struct node*);
struct node
 { int data;
   struct node *next;
  };
 struct node *start=NULL;
void main()
 {  start=create();
      insert(start); 
      insert(start);
}
  struct node* create()
 {  struct node *nw;
    nw=(struct node *)malloc(sizeof(struct node *));
    if(nw==NULL)
    { printf("\nmemory not allocated\n");
     }
    printf("\nenter data\n");
    scanf("%d",&nw->data);
    nw->next=NULL; 
    
    if(start==NULL)
   {
      
     return nw;
  }
     }
   void insert( struct node *np)
 { struct node *temp,*p;
    temp=(struct node *)malloc(sizeof(struct node *));
    printf("\nenter number for insert at the end\n");
      scanf("%d",&temp->data);
      temp->next=NULL;
       p=np;
       while(p->next!=NULL)
      {  
        printf("no are\n%d",p->data);
         p=p->next;
    } 
        p->next=temp;
      printf("inserted node is \n%d",p->data);
    }
       
         
    
       
     
 
