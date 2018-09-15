#include<stdio.h>
#include<stdlib.h>
struct node
 { int data;
   struct node *next;
 };struct node *start=NULL;
 struct node* create();
struct node* insert(struct node *);
 void main()
  {  start=create();
      start=insert(start);
        start=insert(start);
  
}
  struct node* create()
   { struct node *nw;
     nw=(struct node*)malloc(sizeof(struct node));
     if(nw==NULL)
   {  printf("\nmemory not allocated");
     } printf("\nenter a data");
       scanf("%d",&nw->data);
       nw->next==NULL;
       if(start==NULL)
      {  
         start=nw;
        }
   return(nw);
    }
  struct node* insert(struct node *np)
 {  struct node *temp,*p;
     temp=(struct node *)malloc(sizeof(struct node));
     if(temp==NULL)
     { printf("\nmemory not allocated");
       }
      printf("\nenter node for inserting\n");
      scanf("%d",&temp->data);
       temp->next=NULL;
        start=temp;
        temp->next=np;
        p=start;
       while(p->next!=NULL)
       { printf("\ninserted node is%d",p->data);
          p=p->next;
        } printf("\n%d",p->data);
    return temp; }
        
   

