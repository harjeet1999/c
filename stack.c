#include<stdio.h>
void push(int);
void pop();
void print();
 int top=-1;
 int a[10];
void main()
 { 
   pop(); 
   push(7);print();
   push(8);print();
   pop();print();
   push(45);print();
  
 } void push(int x)
  {  if(top==10-1)
     { printf("stack overflow");
        }
        top++;
    a[top]=x;
   }
  void pop()
 { 
   if(top==-1)
    { printf("\nstack is empty");
      }
   else
    { top--;
      }
  }
    void print()
  { int i; 
    printf("stack :");
    for(i=0;i<=top;i++)
     { printf("%d  ",a[i]);
       } printf("\n");
   }
