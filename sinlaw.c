#include<stdio.h>
#include"math.h"
void main()
  {  float a[6],b[6],ar[6],an[6];
    int i; 
     printf("enter the values of A\n");
    for(i=0;i<6;i++)
  scanf("%f",&a[i]);
   printf("\nenter values of B\n");
    for(i=0;i<6;i++)
    scanf("%f",&b[i]);
   printf("\nenter values of ANGLE\n");
    scanf("%f",&an[i]);
    for(i=0;i<6;i++)
     ar[i]=(1/2)*a[i]*b[i]* sin(an[i]);
     printf("area are\n");
    for(i=0;i<6;i++)
   printf("\n%f=",ar[i]);
}
     
