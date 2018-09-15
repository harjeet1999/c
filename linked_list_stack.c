#include<stdio.h>
#include<stdlib.h>
 struct node
 { int data;
   struct node *next;
  };
 struct node *start=NULL,*top=NULL;  
 void push(int);
  void pop();
   void print();
  void main()
  
  {   push(5);print();
      push(9);print();
      pop();print();
      pop();print();
 } void push(int x)
   { struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
      temp->data=x;
      temp->next=top;
       top=temp;
     
      
  }
   
  void pop()
  { struct node *t;  
     
     t=top;
    top=t->next;
     }
     
   void print()
 { 
   printf("\nstack is :");
  while(top->next!=NULL)
    {  printf("%d ",top->data);
       top=top->next;
      }
        printf(" %d",top->data);
  }
 





   









