#include<stdio.h>
#include<stdlib.h>
struct node* insert();
 void display(struct node *);
  void delete(int,struct node*);
  void delete_pos(struct node*);
 struct node 
  { int data;
    struct node *next;
 }; struct node *start=NULL;
   void main()
  {  int c=0,i;
      start=insert();
       c++;
      for(i=0;i<5;i++)
     {   insert();
         c++;
       } display(start);
     delete(c,start);
     printf("node deleted");
     display(start);
     delete_pos(start);
    printf("\nnode is deleted\n");
    display(start);
   
 }
    struct node* insert()
  { struct node *nw,*t;
     nw=(struct node*)malloc(sizeof(struct node));
     if(nw==NULL)
    { printf("mem not");
     }
     printf("\nenter value for data");
     scanf("%d",&nw->data);
     nw->next=NULL;
      if(start==NULL)
        { start=nw;
           return nw;
         }
        else
      {  t=start;
       while(t->next!=NULL)
       {  t=t->next;
         } t->next=nw;
      }
  } void delete(int pos,struct node *n)
   {  int i;
      for(i=1;i<pos-1;i++)
       { n=n->next;
           } n->next=NULL;
     
      }
  void display(struct node *p)
  { 
     
    printf("\ninserted node are\n");
    while(p->next!=NULL)
   {  printf("\n%d",p->data);
       p=p->next;
      } printf("\n%d",p->data);
  } 
 
void delete_pos(struct node *d)
 { struct node *temp;
   int pos,i;
   printf("\nenter the position for deleting the node\n");
   scanf("%d",&pos);
    for(i=1;i<pos-1;i++)
    {     d=d->next;
      }  temp=d->next;
          d->next=temp->next;
   } 
         



      





