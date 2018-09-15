#include<stdio.h>
 
int main()
{
      int product = 0, a, b, count;
      printf("\nEnter First Number:\t");
      scanf("%d", &a);
      printf("\nEnter Second Number:\t");
      scanf("%d", &b);
      for(count = 0; count < b; count++)
      {
            product = product + a;
      }
      printf("\nProduct of %d and %d:\t%d\n", a, b, product);
      return 0;
}
