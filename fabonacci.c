#include<stdio.h>
void fab(int,int);
int main()
{  int a,b;
   printf("enter value  for a and b");
   scanf("%d%d",&a,&b);
    fab(a,b);
} void fab(int x,int y)
{int c;
 static int i=1;
  if(i<=25)
  { c=x+y;
    printf("\n%d",c);
     i=i+1;
      fab(y,c);
}
}
