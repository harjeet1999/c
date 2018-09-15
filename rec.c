#include<stdio.h>
int sum(int);
int main()
{  int s,a;
    printf("enter a number");
    scanf("%d",&s);
    a=sum(s);
   printf("%d",a);
} 
 int sum(int x)
   { int r,z;
    while(x!=0)
     { r=x%10;
     z=r+sum(x/10);
     return z;
  } 
     
}
    
