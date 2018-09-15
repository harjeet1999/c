#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
 { char *a[10];
 int i;
   char *p;
     p=(char *) malloc(10 * sizeof(char));
     scanf("%s",p);
       strcpy(a,p);
   
     printf("%s",a);
}
