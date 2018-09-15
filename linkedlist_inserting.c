#include<stdio.h>
#include<stdlib.h>

struct node
 { int data;
   struct node *next;
  };
struct node *start=NULL;

struct node *create();

   int count=0;
   void insert(struct node *);
   void insert_node(int,struct node *);
  /* void delete(struct node *);*/
   void main()
   { 
        int i;
        start=create();
        count++;
        for(i=0;i<5;i++)
        {
              insert(start);
              count++; 
        }
        insert_node(count,start);
 	/*delete(start);*/
  }


  struct node *create()
 { struct node *nw;
   nw=(struct node*)malloc(sizeof(struct node*));
   if(nw==NULL)
  { printf("memory not allocated");
    }
    printf("enter node\n");
    scanf("%d",&nw->data);
    nw->next=NULL;
   if(start==NULL)
   {  start=nw;
      }
  return nw;
} void insert(struct node *np)
  {  struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
   { printf("\nmemory not allocated");
      }
   printf("\nenter a no ");
   scanf("%d",&temp->data);
    temp->next=NULL;
   
    while(np->next!=NULL)
     {     printf("%d",np->data);
         np=np->next;
       } np=temp;
          printf("\ninserted node at end is %d",np->data);
   } 
    
void insert_node(int c,struct node *p)
{
	int a,i,counter=0;
	struct node *nw,*t;
	nw=(struct node*)malloc(sizeof(struct node));
	if(nw==NULL)
	{
		printf("\n memory not allocated");
	}
	printf("\nenter a no for insert at any position");
	scanf("%d",&nw->data);
	nw->next=NULL;
	printf("\ntotal nodes are =%d",c);
	printf("\nenter a position no for inserting node\n");
	scanf("%d",&a);
                 for(i=0;i<a;i++)
	while(p->next!=NULL)
	 {               p=p->next;
		counter++;
		if(counter==a-1)
		{  t=p;
       		   nw->next=t;               	
	                    nw=p->next; 				}
  	printf("\n%d",p->data);	
                  }
               
       }

/*void delete(struct node *del)
 {   while(del->next!=NULL)
    {  printf("\n%d",del->data);
       del=del->next;
       }
      del=NULL;
      printf("\ndeleted node is %d",del->data);*/
    

     



