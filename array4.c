#include<stdio.h>
int main()
{  int arr[25],a,j,k,i;
    printf("enter the numbers");
   for(k=0;k<=24;k++)
   {  scanf("%d",&arr[k]);
     
   }  for(k=0;k<=24;k++)
     { printf("\t%d",arr[k]); 
          }
      nu:
      printf("enter a number for search");  
      scanf("%d",&a);
      printf("%d",a);  
     for(j=0;j<=24;j++)
     {  if(a==arr[j])
         printf("\n%d",arr[j]);
          
} printf("enter a number\n 1 for search another element\n 2 for exit\n");
      scanf("%d",&i);
      switch(i)
  {   case 1:
         goto nu;
      case 2:
        break;
      default:
         printf("enter correct input");
}
  }
      
      
